#include "Convolution.h"

void convolve(T_data in[img_rows][img_cols], T_data out[img_rows][img_cols], T_kernel krnl[kernel_size][kernel_size])
{
	typedef unsigned int TOffset;

	// At the boundary of the matrix, convolution is not possible.
	// Since the kernel lies outside the matrix.
	// Instead these pixels are ignored.
	const TOffset rs = floor((kernel_size - 1) / 2);
	const TOffset cs = floor((kernel_size - 1) / 2);

	const TOffset re = img_rows - rs;
	const TOffset ce = img_cols - cs;

	for (TOffset r = rs; r < re; ++r)
		imgRow:for (TOffset c = cs; c < ce; ++c)
		{
			T_data sum = 0;
			kernelCol:for (TOffset kc = 0; kc < kernel_size; ++kc)
				kernelRow:for (TOffset kr = 0; kr < kernel_size; ++kr)
				{
					TOffset row_offset = r - rs + kr;
					TOffset col_offset = c - cs + kc;
					sum += in[row_offset][col_offset] * krnl[kr][kc];
				}
			out[r][c] = sum;
		}
}

