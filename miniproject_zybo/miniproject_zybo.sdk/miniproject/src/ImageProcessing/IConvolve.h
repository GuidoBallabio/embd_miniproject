#pragma once

#include "../types.h"

template<typename T_img, typename T_kernel, size_t i_rows, size_t i_cols, size_t k_rows, size_t k_cols>
class IConvolve
{
public:
	virtual void convolve (T_img in[i_rows][i_cols], T_img out[i_rows][i_cols], T_kernel kernel[k_rows][k_cols]) = 0;
	virtual ~IConvolve(){}
};
