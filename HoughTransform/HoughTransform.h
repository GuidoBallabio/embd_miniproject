#ifndef __HOUGHTRANSFORM_H__
#define __HOUGHTRANSFORM_H__

#include "accumulator.h"
#include <cmath>


void houghTransform(T_data in[img_rows][img_cols],
		T_data out[img_rows][img_cols],
		T_acc acc[acc_rows][acc_cols],
		T_acc dNonZero[acc_rows * acc_cols],
		T_acc fiNonZero[acc_rows * acc_cols],
		float threshold);

#endif
