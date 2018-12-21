#include <iostream>
#include <fstream>
#include <string>
#include "xparameters.h"

#include "./GPIOs/Buttons.h"
#include "./GPIOs/Leds.h"
#include "HWInterrupt.h"

#define BTN_INT 			XGPIO_IR_CH1_MASK

static int led_data;
static int btn_value;
static bool led8On = false;

Buttons btn;
IHWInput& btns = btn;
Leds leds;

XGpio b = btn.getGPIOInstance();
XGpio l = leds.getGPIOInstance();

static void BTN_Intr_Handler(void *InstancePtr)
{
	// Disable GPIO interrupts
	XGpio_InterruptDisable(&b, BTN_INT);

	// Ignore additional button presses
	if ((XGpio_InterruptGetStatus(&b) & BTN_INT) != BTN_INT) {
			printf("Error\r\n");
		}
	btn_value = XGpio_DiscreteRead(&b, 1);
	// Increment counter based on button value

	if (btn_value == 8)
	{
		if (led8On)
			led_data = 0;
		else
			led_data = 8;

		led8On = !led8On;
		XGpio_DiscreteWrite(&l, 1, led_data);

	}

	(void)XGpio_InterruptClear(&b, BTN_INT);
    // Enable GPIO interrupts
    XGpio_InterruptEnable(&b, BTN_INT);

}

int main(int, char**)
{
	xil_printf("Starting program\r\n");

	//Initialize GPIOs

	// Initialize interrupt controller
	HWInterrupt interrupt(b, BTN_INT, XPAR_FABRIC_BUTTONS_IP2INTC_IRPT_INTR,
			(void*)BTN_Intr_Handler);

	char value = inbyte();
	inbyte(); // CR

	while (value != '1')
	{
		value = inbyte();
		inbyte();
	}



	xil_printf("Exiting program\r\n");

	return 0;
}
