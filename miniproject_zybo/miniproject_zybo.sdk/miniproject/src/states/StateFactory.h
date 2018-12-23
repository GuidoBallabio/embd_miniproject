#pragma once

#include "On.h"
#include "Idle.h"
#include "HWMode.h"
#include "SWMode.h"
#include "Running.h"
#include "Off.h"

template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols,
		typename T_accumulator, T_size acc_rows, T_size acc_cols>
class IStateFactory {
public:
  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols>*OnInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) = 0;
  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *IdleInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) = 0;
  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *SWModeInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) = 0;
  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *HWModeInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) = 0;
  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *RunningInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) = 0;
  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *OffInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) = 0;
};

template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols,
		typename T_accumulator, T_size acc_rows, T_size acc_cols>
class StateFactorySingleton : public IStateFactory<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> {
public:
  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *OnInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) override {
    static On<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> s(context);

    return &s;
  }

  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *IdleInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) override {
    static Idle<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> s(context);

    return &s;
  }

  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *HWModeInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) override {
    static HWMode<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> s(context);

    return &s;
  }

  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *SWModeInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) override {
    static SWMode<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> s(context);

    return &s;
  }

  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *RunningInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) override {
    static Running<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> s(context);

    return &s;
  }

  virtual State<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *OffInstance(IContext<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *context) override {
    static Off<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> s(context);

    return &s;
  }

};
