/*
 * \class Switches
 * \brief This class is used for accessing the switches on the Zybo board
 * \author Daniella Tola
 * \date 20/12/2018
 */
#pragma once
#include "xgpio.h"
#include "IHWInput.h"

class Switches: public IHWInput
{
public:
	static auto getInstance() {
	    static Switches instance;
	    return &instance;
	  }

	Switches(const Switches &) = delete;
	Switches &operator=(const Switches) = delete;

	virtual T_value getInputValue() override
	{
		return XGpio_DiscreteRead(&_switches, 1);
	}

private:
	XGpio _switches;

	Switches()
		{
			// Initialize switches driver
			int status = XGpio_Initialize(&_switches, XPAR_SWITCHES_DEVICE_ID);
			if(status != XST_SUCCESS)
			{
				printf("Error: Failed to initialize switches hardware driver\r\n");
				return;
			}

			// Set switches as inputs
			XGpio_SetDataDirection(&_switches, 1, 0xFF);
		}
};
