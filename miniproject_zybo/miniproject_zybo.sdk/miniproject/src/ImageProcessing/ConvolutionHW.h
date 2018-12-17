#pragma once
#include "../types.h"
#include "xconvolve.h"

class ConvolutionHW
{
public:

	ConvolutionHW()
	{
		int status = XConvolve_Initialize(&_convolve, XPAR_CONVOLVE_0_DEVICE_ID);
		if (status != XST_SUCCESS)
			printf("Failed to initialize Hardware");
	}


	template<typename T_img, typename T_kernel, size_t i_rows, size_t i_cols, size_t k_rows, size_t k_cols >
	void convolve(T_img in[i_rows][i_cols], T_img out[i_rows][i_cols], T_kernel kernel[k_rows][k_cols])
	{
		T_size i_length = i_rows*i_cols*sizeof(T_img);
		T_size k_length = k_rows*k_cols*sizeof(T_kernel);

		while(!XConvolve_IsIdle(&_convolve));

		XConvolve_Write_in_r_Bytes(
				&_convolve,
				0,
				reinterpret_cast<char*>(in),
				i_length);

		XConvolve_Write_krnl_Bytes(
						&_convolve,
						0,
						reinterpret_cast<char*>(kernel),
						k_length);

		XConvolve_Start(&_convolve);

		while(!XConvolve_IsDone(&_convolve));

		XConvolve_Read_out_r_Bytes(
				&_convolve,
				0,
				reinterpret_cast<char*>(out),
				i_length);
	}

private:
	XConvolve _convolve;
	XConvolve_Config* configPtr;
};