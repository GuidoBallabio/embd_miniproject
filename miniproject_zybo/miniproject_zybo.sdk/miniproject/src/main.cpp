#include <iostream>
#include <fstream>
#include <string>
#include "xparameters.h"
#include "xgpio.h"
#include "./ImageProcessing/HoughTransformSW.h"
#include "./ImageProcessing/ImageMaths.h"
#include "./DataLoader/LoaderSDFile.h"
#include "ImageProcessing/ConvolutionSW.h"
#include "./ImageProcessing/ConvolutionHW.h"
#include "./Timer/XTimer.h"

// constant values
constexpr size_t img_rows = 50;
constexpr size_t img_cols = 50;
constexpr size_t kernel_size = 3;
constexpr int8_t f = 9;
constexpr size_t acc_rows = (img_rows + img_cols) * 2;
constexpr size_t acc_cols = 180;

// type defs
typedef int16_t T_data;
typedef int8_t T_kernel;
typedef float T_accumulator;

// images
Image<T_data, img_rows, img_cols> in;
Image<T_data, img_rows, img_cols> buffer;
Image<T_data, img_rows, img_cols> out;
// kernels for blur and edge detection
Image<T_kernel, kernel_size, kernel_size> blur_kernel = { f,f,f,f,f,f,f,f,f };
Image<T_kernel, kernel_size, kernel_size> sobel_kernel = { 2,2,0,2,0,-2,0,-2,-2 };
// arrays for hough transform
Image<T_accumulator, acc_rows, acc_cols> accumulator = { 0 };
float dNonZero[img_cols * img_rows] = { 0 };
float fiNonZero[img_cols * img_rows] = { 0 };


int main(int, char**)
{
	xil_printf("Starting program\r\n");
	int size = img_cols*img_rows;

	// Initialization
	LoaderSDFile<T_data> loader = LoaderSDFile<T_data>((char*)"input", (char*)"hw_blur");
	ConvolutionSW processorSW;
	ConvolutionHW<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size> processorHW;
	HoughTransformSW hough;
	XTimer timer;

	// Load image from binary file
	loader.LoadData(in.vect, size);

	// Find mean value of image
	//T_data meanVal = ImageMaths::mean<T_data, img_rows, img_cols>(in.mat);

	// Blur image
	timer.start();
	processorHW.convolve(in.mat, buffer.mat, blur_kernel.mat);
	timer.stop();
	ImageMaths::scaleImage<T_data, img_rows, img_cols>(buffer.mat, buffer.mat, f);
	loader.ExportData(buffer.vect, size);

	printf("Time for HW blur using int for kernel and img minishapes: %lu\r\n", timer.durationTicks());

	// Edge detection with sobel
	loader.SetOutputFile((char*)"hw_edge");
	timer.start();
	processorHW.convolve(in.mat, out.mat, sobel_kernel.mat);
	timer.stop();
	loader.ExportData(out.vect, size);

	printf("Time for HW edge using int for kernel and img minishapes: %lu\r\n", timer.durationTicks());


	loader.SetOutputFile((char*)"sw_blur");
	timer.start();
	processorSW.convolve<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size>(in.mat, buffer.mat, blur_kernel.mat);
	timer.stop();
	ImageMaths::scaleImage<T_data, img_rows, img_cols>(buffer.mat, buffer.mat, f);
	loader.ExportData(buffer.vect, size);

	printf("Time for SW blur using int for kernel and img minishapes: %lu\r\n", timer.durationTicks());

	// Edge detection with sobel

	loader.SetOutputFile((char*)"sw_edge");
	timer.start();
	processorSW.convolve<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size>(buffer.mat, out.mat, sobel_kernel.mat);
	timer.stop();
	loader.ExportData(out.vect, size);

	printf("Time for SW edge using int for kernel and img minishapes: %lu\r\n", timer.durationTicks());

//
//	// Threshold
//	loader.SetOutputFile((char*)"out_th");
//	ImageMaths::threshold<T_data, img_rows, img_cols>(out.mat, out.mat, meanVal);
//	loader.ExportData(out.vect, size);
//
//	// Find houghlines
//	loader.SetOutputFile((char*)"out_line");
//	ImageMaths::setImageValues<T_data, img_rows, img_cols>(buffer.mat, 0);
//	hough.houghTransform<T_data, T_accumulator, img_rows, img_cols, acc_rows, acc_cols>(out.mat, buffer.mat, accumulator.mat, dNonZero, fiNonZero, 0.55f);
//	loader.ExportData(buffer.vect, size);
//
//	// Add houghlines to image
//	loader.SetOutputFile((char*)"out_himg");
//	ImageMaths::threshold<T_data, img_rows, img_cols>(in.mat, out.mat, 50);
//	ImageMaths::addImages<T_data, img_rows, img_cols>(out.mat, buffer.mat, out.mat);
//	loader.ExportData(out.vect, size);

	xil_printf("Finished exporting img\r\n");

	return 0;
}
