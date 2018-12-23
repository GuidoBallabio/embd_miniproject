/*
 * \class IHWInput
 * \brief This interface is used for gpios on the Zybo board that can be set as inputs,
 * e.g. the switches and the buttons on the board
 * \author Daniella Tola
 * \date 20/12/2018
 */
#pragma once

#include <vector>

class IHWInput
{
public:
	typedef uint8_t T_value;

	virtual T_value getInputValue() = 0;

	// number of button pressed or switch activated
	virtual std::vector<bool> getActiveInputs(){
		T_value num = this->getInputValue();

		std::vector<bool> powers = std::vector<bool>(4);
		for (uint k = 1, i = 0; i <= powers.size(); k <<= 1, i++)
			if (k & num)
				powers[i] = true;
			else
				powers[i] = false;

		return powers;
	}
};
