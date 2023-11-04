#pragma once

#include "PPPPPPPPP.h"

class ItalianChef : public PPPPPPPPP
{
public:

	ItalianChef(int Height, int Weight);

	virtual ~ItalianChef();

	void makePasta() ;
	void makeSpecialDish() override;
};