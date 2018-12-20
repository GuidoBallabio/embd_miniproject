/*
 * \class IHWInput
 * \brief This interface is used for gpios on the Zybo board that can be set as inputs,
 * e.g. the switches and the buttons on the board
 * \author Daniella Tola
 * \date 20/12/2018
 */
#pragma once

class IHWInput
{
public:
	typedef uint8_t T_value;

	virtual T_value getInputValue() = 0;
};
