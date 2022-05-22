#pragma once

#include "PPPPPPPPP.h"

class Chef : public PPPPPPPPP
{
public:

	Chef(int Height, int Weight);

	virtual ~Chef();

	virtual void Dish() ;
	void makeChicken();
	void makeSalad();
	void makeSpecialDish() override;
};