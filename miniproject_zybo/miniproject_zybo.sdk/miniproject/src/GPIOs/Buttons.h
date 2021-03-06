/*
 * \class Buttons
 * \brief This class is used for accessing the buttons on the Zybo board
 * \author Daniella Tola
 * \date 20/12/2018
 */
#pragma once
#include "xgpio.h"
#include "IHWInput.h"

class Buttons: public IHWInput
{
public:
	static auto getInstance() {
	    static Buttons instance;
	    return &instance;
	  }

	Buttons(const Leds &) = delete;
	Buttons &operator=(const Buttons) = delete;

	virtual T_value getInputValue() override
	{
		return XGpio_DiscreteRead(&_buttons, 1);
	}

	XGpio getGPIOInstance()
	{
		return _buttons;
	}

private:
	XGpio _buttons;

	Buttons()
	{
		// Initialize buttons driver
		int status = XGpio_Initialize(&_buttons, XPAR_BUTTONS_DEVICE_ID);
		if(status != XST_SUCCESS)
		{
			printf("Error: Failed to initialize button hardware driver\r\n");
			return;
		}

		// Set buttons as inputs
		XGpio_SetDataDirection(&_buttons, 1, 0xFF);
	}

};
