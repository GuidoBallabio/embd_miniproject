/*
 * \class Leds
 * \brief This class is used for accessing the leds on the Zybo board
 * \author Daniella Tola
 * \date 20/12/2018
 */
#pragma once
#include "xgpio.h"
#include "xil_printf.h"

class Leds
{
public:
	static auto getInstance() {
	    static Leds instance;
	    return &instance;
	  }

	Leds(const Leds &) = delete;
	Leds &operator=(const Leds) = delete;

	void setValue(uint8_t value)
	{
		XGpio_DiscreteWrite(&_leds, 1, value);
	}

	XGpio getGPIOInstance()
	{
		return _leds;
	}

private:
	XGpio _leds;

	Leds()
		{
			// Initialize led driver
			int status = XGpio_Initialize(&_leds, XPAR_LEDS_DEVICE_ID);
			if(status != XST_SUCCESS)
			{
				xil_printf("Error: Failed to initialize LED hardware driver\n");
				return;
			}

			// Set as outputs, and initialize all leds to be turned off
			XGpio_SetDataDirection(&_leds, 1, 0x00);
			XGpio_DiscreteWrite(&_leds, 1, 0); // set all values to 0
		}
};
