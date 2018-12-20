#pragma once
#include "image.h"

const T_size acc_rows = (img_rows + img_cols) * 2;
const T_size acc_cols = 180;

typedef float T_acc;

// arrays for hough transform
static Image<T_acc, acc_rows, acc_cols> accumulator = { 0 };
