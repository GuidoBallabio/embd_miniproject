#include "Convolution.h"

void convolveMedium(T_data in[img_rows][img_cols], T_data out[img_rows][img_cols], T_kernel krnl[kernel_size][kernel_size])
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
		imgRows:for (TOffset c = cs; c < ce; ++c)
		{
			T_data sum = 0;
			kCols:for (TOffset kc = 0; kc < kernel_size; ++kc)
				kRows:for (TOffset kr = 0; kr < kernel_size; ++kr)
				{
					unsigned int row_offset = r - rs + kr;
					unsigned int col_offset = c - cs + kc;
					sum += in[row_offset][col_offset] * krnl[kr][kc];
				}
			out[r][c] = sum;
		}
}

