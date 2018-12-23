#include <iostream>
#include "system/EmbeddedSystemX.h"
#include "system/Services.h"
#include "system/VideoSystem/VideoProcessingSystem.h"
#include "DataLoader/LoaderSDFile.h"
#include "Timer/XTimer.h"


void quit() { std::cout << "Quitting..." << std::endl; }

// start : Defines the entry point for the console application.
void start() {
	printf("Starting program\r\n");
  // Insert correct file names
  memcpy(fileNames, minishapesFileNames, nFiles*sizeof(const char*));


  ILoader<T_data>* loader = new LoaderSDFile<T_data>(fileNames[0], fileNames[1]);
  IStateFactory<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size, T_accumulator, acc_rows, acc_cols> *stateFactorySingleton =
		  new StateFactorySingleton<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size, T_accumulator, acc_rows, acc_cols>();

  ITimer* timer = new XTimer();
  IVPS<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size, T_accumulator, acc_rows, acc_cols> *vps =
		  new VideoProcessingSystem<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size, T_accumulator, acc_rows, acc_cols>(loader, fileNames, timer);


  EmbeddedSystemX<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size, T_accumulator, acc_rows, acc_cols> *emb =
		  new EmbeddedSystemX<T_data, T_kernel, img_rows, img_cols, kernel_size, kernel_size, T_accumulator, acc_rows, acc_cols>(stateFactorySingleton, vps);

  //ManualStateTestService(emb);
  GetHWInputService(emb);
}

int main(int, char**)
{
	 start();
	 quit();

	return 0;
}
