#pragma once

#include "Idle.h"

template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols,typename T_accumulator, T_size acc_rows, T_size acc_cols>
class SWMode : public Idle<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> {
public:
  using Idle<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>::Idle;

  virtual void ChangeMode() override {
    this->context->ChangeState(StateTypes::s_HWMode);
  }

  virtual void entry() override{
	State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>::entry();
	this->context->GetVPS()->setSW();
  }

  virtual std::string Name() const override { return "SWMode"; }

  virtual int Number() const override { return 3; }

private:
};