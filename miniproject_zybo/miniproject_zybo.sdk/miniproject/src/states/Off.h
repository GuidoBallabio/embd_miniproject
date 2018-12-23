#pragma once

#include "State.h"

template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols,typename T_accumulator, T_size acc_rows, T_size acc_cols>
class Off : public State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> {
public:
  using State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>::State;

  virtual void entry() override {
  	  State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>::entry();
  }

  virtual std::string Name() const override { return "Off"; }

  virtual int Number() const override { return 0; }
};
