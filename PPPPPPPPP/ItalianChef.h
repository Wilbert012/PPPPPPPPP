#pragma once

#include "PPPPPPPPP.h"

class ItalianChef : public PPPPPPPPP
{
public:

	ItalianChef(int Height, int Weight);

	virtual ~ItalianChef();

	virtual void Dish() ;
	void makePasta() ;
	void makeSpecialDish() override;
};