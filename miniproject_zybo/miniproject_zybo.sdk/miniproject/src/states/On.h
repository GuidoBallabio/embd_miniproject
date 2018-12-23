#pragma once

#include "State.h"

template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols, typename T_accumulator, T_size acc_rows, T_size acc_cols>
class On : public State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> {
public:
  using State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>::State;

  virtual void Quit() override {
    this->context->ChangeState(StateTypes::s_Off);
  }

  virtual void entry() override {
	  State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>::entry();
	  this->context->ChangeState(StateTypes::s_Idle);
  }

  virtual std::string Name() const override { return "On"; }

  virtual int Number() const override { return 1; }

private:
};