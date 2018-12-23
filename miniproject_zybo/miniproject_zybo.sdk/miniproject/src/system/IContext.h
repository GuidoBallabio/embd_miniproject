#pragma once

#include "VideoSystem/IVPS.h"
#include "../types.h"

// Define the state types for the specific context
enum StateTypes {
  s_On,
  s_Idle,
  s_HWMode,
  s_SWMode,
  s_Running,
  s_Off
};

template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols,
		typename T_accumulator, T_size acc_rows, T_size acc_cols>
class IContext {
public:
  virtual void ChangeState(StateTypes state) = 0;
  virtual IVPS<T_img, T_kernel, i_rows, i_cols, k_rows, k_cols, T_accumulator, acc_rows, acc_cols> *GetVPS() = 0;
};
