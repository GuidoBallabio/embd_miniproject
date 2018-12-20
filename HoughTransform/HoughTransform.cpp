#include "HoughTransform.h"

void houghTransform(T_data in[img_rows][img_cols],
		T_data out[img_rows][img_cols],
		T_acc acc[acc_rows][acc_cols],
		T_acc dNonZero[acc_rows * acc_cols],
		T_acc fiNonZero[acc_rows * acc_cols],
		float threshold)
{
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
			if (in[r][c] == 1)
			{
				houghTransform_label0:for (T_size fi = 0; fi < acc_cols; fi++)
				{
					d = static_cast<T_size>(roundf((r*cos(M_PI * fi / acc_cols) + c * sin(M_PI * fi / acc_cols)) + edgeImgDiagonal));
					acc[d][fi]++;
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
			if (in[r][c] > accMax)
			{
				accMax = in[r][c];
			}
		}
	}

	// Normalize Hough Space. Divide by max.
	for (T_size c = 0; c < img_cols; c++)
	{
		houghTransform_label1:for (T_size r = 0; r < img_rows; r++)
		{
			acc[r][c] = in[r][c] / accMax;
		}
	}

	for (T_size c = 0; c < acc_cols; c++)
	{
		for (T_size r = 0; r < acc_rows; r++)
		{
			if (acc[r][c] > threshold)
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
				out[outRow][c] = 1;
			}
		}
	}
}
