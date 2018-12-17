#pragma once
#include <string>
#include <fstream>
#include "ILoader.h"
#include "../SDCard/FileSDCard.h"

template<typename T>
class LoaderSDFile : public ILoader<T>
{
public:
	LoaderSDFile(char* inputName, char* outputName): _inputName(inputName), _outputName(outputName)
	{}

	virtual size_t LoadData(T buffer[], size_t size) override
	{
		int result;
		FileSDCard file((char*)"0:/");

		result = file.mount();
		if (result != XST_SUCCESS) printf("Failed to mount SD card\r\n");

		result = file.open((char*)_inputName, FA_OPEN_EXISTING | FA_READ);
		if (result != XST_SUCCESS) printf("Failed open file for reading\r\n");

		result = file.read((void *)buffer, sizeof(T)*size);
		if (result != XST_SUCCESS) printf("Failed reading from file\r\n");

		result = file.close();
		if (result != XST_SUCCESS) printf("Failed closing file\r\n");

		return size;
	};

	virtual void ExportData(T buffer[], size_t size) override
	{
		int result;
		FileSDCard file((char*)"0:/");

		result = file.mount();
		if (result != XST_SUCCESS) printf("Failed to mount SD card\r\n");

		// Create a new file if doesn't exist
		result = file.open((char*)_outputName, FA_CREATE_ALWAYS | FA_WRITE);
		if (result != XST_SUCCESS) printf("Failed open file for writing\r\n");

		// Write to start of file
		result = file.write((void *)buffer, size*sizeof(T));
		if (result != XST_SUCCESS) printf("Failed writing to file\r\n");

		result = file.close();
		if (result != XST_SUCCESS) printf("Failed closing file\r\n");
	};

	void SetOutputFile(char* outputName)
	{
		_outputName = outputName;
	}


private:
	char* _inputName;
	char* _outputName;
};
