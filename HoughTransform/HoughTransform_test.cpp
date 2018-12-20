#include <iostream>
#include "HoughTransform.h"

using namespace std;

Image<T_data, img_rows, img_cols> hw_result = { 0 };
Image<T_data, img_rows, img_cols> sw_result = { 0 };
float dNonZero[img_cols * img_rows] = { 0 };
float fiNonZero[img_cols * img_rows] = { 0 };

int main(int argc, char **argv)
{ 
   int err_cnt = 0;
   float threshold = 0.55f;
   
   /*
   * HOUGH TRANSFORM FUNCTION SW START
   */
   	int edgeImgDiagonal = 0;
	T_size d = 0;
	T_size outRow = 0;
	T_size nonZeroCount = 0;

	// Edge Image Diagonal
	edgeImgDiagonal += (int)pow(sqrt(img_rows + img_cols), 2);

	// Calculating hough space
	for (T_size c = 0; c < img_cols; c++)
	{
		for (T_size r = 0; r < img_rows; r++)
		{
			if (img.mat[r][c] == 1)
			{
				for (T_size fi = 0; fi < acc_cols; fi++)
				{
					d = static_cast<T_size>(roundf((r*cos(M_PI * fi / acc_cols) + c * sin(M_PI * fi / acc_cols)) + edgeImgDiagonal));
					accumulator.mat[d][fi]++;
				}
			}
		}
	}

	// Finding max value of ACC
	T_acc accMax = 0;

	for (T_size c = 0; c < img_cols; c++)
	{
		for (T_size r = 0; r < img_rows; r++)
		{
			if (img.mat[r][c] > accMax)
			{
				accMax = img.mat[r][c];
			}
		}
	}

	// Normalize Hough Space. Divide by max.
	for (T_size c = 0; c < img_cols; c++)
	{
		for (T_size r = 0; r < img_rows; r++)
		{
			accumulator.mat[r][c] = img.mat[r][c] / accMax;
		}
	}

	for (T_size c = 0; c < acc_cols; c++)
	{
		for (T_size r = 0; r < acc_rows; r++)
		{
			if (accumulator.mat[r][c] > threshold)
			{
				dNonZero[nonZeroCount] = r;
				fiNonZero[nonZeroCount] = c;
				nonZeroCount++;
			}
		}
	}

	// Putting the lines on a picture. This is an empty matrix with just the lines.
	for (T_size k = 0; k < nonZeroCount; k++)
	{
		for (T_size c = 0; c < img_cols; c++)
		{
			outRow = (T_size)round(-tan(M_PI*fiNonZero[k] / acc_cols)*c + (dNonZero[k] - edgeImgDiagonal) / cos(M_PI*fiNonZero[k] / acc_cols));
			if (outRow > 1 && outRow < img_rows)
			{
				sw_result.mat[outRow][c] = 1;
			}
		}
	}
	/*
	* HOUGH TRANSFORM FUNCTION SW END
	*/
	

#ifdef HW_COSIM
   // Run the AutoESL edge detection block
   houghTransform(img.mat, hw_result.mat, accumulator.mat, dNonZero, fiNonZero, threshold);

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
