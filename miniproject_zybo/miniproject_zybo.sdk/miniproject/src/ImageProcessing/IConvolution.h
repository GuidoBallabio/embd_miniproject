#pragma once


template<typename T_img, typename T_kernel, T_size i_rows, T_size i_cols, T_size k_rows, T_size k_cols>
class IConvolution
{
public:
	virtual void convolve(T_img in[i_rows][i_cols], T_img out[i_rows][i_cols], T_kernel kernel[k_rows][k_cols]) = 0;
};
