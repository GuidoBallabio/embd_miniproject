#include <iostream>
#include "Convolution.h"

using namespace std;

Image<T_data, img_rows, img_cols> hw_result = { 0 };
Image<T_data, img_rows, img_cols> sw_result = { 0 };

int main(int argc, char **argv)
{ 
   int err_cnt = 0;
   
   /*
   * CONVOLVE FUNCTION SW START
   */
   typedef unsigned int TOffset;

	// At the boundary of the matrix, convolution is not possible.
	// Since the kernel lies outside the matrix.
	// Instead these pixels are ignored.
	const TOffset rs = floor((kernel_size - 1) / 2);
	const TOffset cs = floor((kernel_size - 1) / 2);

	const TOffset re = img_rows - rs;
	const TOffset ce = img_cols - cs;

	for (TOffset r = rs; r < re; ++r)
		for (TOffset c = cs; c < ce; ++c)
		{
			T_data sum = 0;
			for (TOffset kc = 0; kc < kernel_size; ++kc)
				for (TOffset kr = 0; kr < kernel_size; ++kr)
				{
					unsigned int row_offset = r - rs + kr;
					unsigned int col_offset = c - cs + kc;
					sum += img.mat[row_offset][col_offset] * kernel.mat[kr][kc];
				}
			sw_result.mat[r][c] = sum;
		}
	/*
	* CONVOLVE FUNCTION SW END
	*/
	

#ifdef HW_COSIM
   // Run the AutoESL edge detection block
   convolve(img.mat, hw_result.mat, kernel.mat);

  for (T_size row = 0; row < img_rows; ++row) {
      for (T_size col = 0; col < img_cols; ++col) {
         // Check HW result against SW
         if (hw_result.mat[row][col] != sw_result.mat[row][col]) {
            err_cnt++;
            cout << "HW: " << char( (int)(hw_result.mat[row][col])+48) << ", SW: " << char((int)(sw_result.mat[row][col])+48) << endl;
         }
      }
   }
#endif

#ifdef HW_COSIM
   if (err_cnt)
      cout << "ERROR: " << err_cnt << " mismatches detected!" << endl;
   else
      cout << "Test passed." << endl;
#endif
   return err_cnt;
}
