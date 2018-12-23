#pragma once

#include <vector>
#include "../../types.h"

template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols,
		typename T_accumulator, T_size acc_rows, T_size acc_cols>
class IVPS
{
public:
	virtual void setHW() = 0;
	virtual void setSW() = 0;
	virtual void run(std::vector<bool> filters) = 0;
	virtual ~IVPS(){};
};
