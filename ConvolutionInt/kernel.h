#ifndef __KERNEL_H__
#define __KERNEL_H__

#include "types.h"

const T_size kernel_size = 3;
typedef char T_kernel;

static Image<T_kernel, kernel_size, kernel_size> kernel = { 2,2,0,2,0,-2,0,-2,-2 };

#endif
