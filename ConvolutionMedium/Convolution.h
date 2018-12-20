#ifndef __CONVOLUTION_H__
#define __CONVOLUTION_H__

#include "camera_man.h"
#include "kernel.h"
#include <cmath>

void convolveMedium(T_data in[img_rows][img_cols], T_data out[img_rows][img_cols], T_kernel krnl[kernel_size][kernel_size]);

#endif
