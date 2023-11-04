#pragma once

#include "PPPPPPPPP.h"

class Chef : public PPPPPPPPP
{
public:

	Chef(int Height, int Weight);

	virtual ~Chef();

	void makeChicken();
	void makeSalad();
	void makeSpecialDish() override;
};