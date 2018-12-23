#pragma once

#include <string>

#include "IContext.h"
#include "../states/State.h"
#include "../states/StateFactory.h"
#include "./VideoSystem/IVPS.h"
#include "../GPIOs/Leds.h"


template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols,
		typename T_accumulator, T_size acc_rows, T_size acc_cols>
class EmbeddedSystemX : public IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> {
public:
  EmbeddedSystemX(
		  IStateFactory<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *stateFactory,
		  IVPS<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>* vps
		  )
  {
    _stateFactory = stateFactory;
	_state = _stateFactory->OnInstance(this);
	_vps = vps;
	_state->entry();
  }

  ~EmbeddedSystemX()
  {
	  delete _state;
	  delete _name;
	  delete _vps;
  }

  // State machine functions
  void Finished()
  {
	  std::cout << "Called Finished at state " << _state->Name() << "\n";
	  _state->Finished();
  }
  void ChangeMode()
  {
	  std::cout << "Called ChangeMode at state " << _state->Name() << "\n";
	  _state->ChangeMode();
  }
  void Run()
  {
	  std::cout << "Called Run at state " << _state->Name() << "\n";
	  _state->Run();
  }
  void Quit()
  {
	  std::cout << "Called Quit at state " << _state->Name() << "\n";
	  _state->Quit();
  }

  // context
  virtual void ChangeState(StateTypes state) override
{
  // Call the exit function on the current state before changing it
	_state->exit();

	switch (state) {
	case StateTypes::s_On:
	  std::cout << "Changing state from " << _state->Name()
				<< " to On\n";
	  _state = _stateFactory->OnInstance(this);
	  break;
	case StateTypes::s_Idle:
	  std::cout << "Changing state from " << _state->Name()
				<< " to Idle\n";
	  _state = _stateFactory->IdleInstance(this);
	  break;
	case StateTypes::s_SWMode:
	  std::cout << "Changing state from " << _state->Name() << " to SWMode\n";
	  _state = _stateFactory->SWModeInstance(this);
	  break;
	case StateTypes::s_HWMode:
	  std::cout << "Changing state from " << _state->Name()
				<< " to HWMode\n";
	  _state = _stateFactory->HWModeInstance(this);
	  break;
	case StateTypes::s_Running:
	  std::cout << "Changing state from " << _state->Name()
				<< " to Running\n";
	  _state = _stateFactory->RunningInstance(this);
	  break;
	case StateTypes::s_Off:
	  std::cout << "Changing state from " << _state->Name() << " to Off\n";
	  _state = _stateFactory->OffInstance(this);
	  break;
	default:
	  std::cout << "Default, no state is selected :(" << std::endl;
	  break;
	}

	// Call the entry function on the new state
	_state->entry();
  }

  virtual IVPS<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *GetVPS() override
  {
	  return _vps;
  }

private:
  char *_name;
  State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *_state;
  IStateFactory<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *_stateFactory;
  IVPS<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *_vps;
};
