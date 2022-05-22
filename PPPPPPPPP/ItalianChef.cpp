#pragma once

#include <iostream>

#include "ItalianChef.h"

ItalianChef::ItalianChef(int Height, int Weight):
	PPPPPPPPP(Height, Weight)
{
}

ItalianChef::~ItalianChef()
{
}

void ItalianChef::Dish()
{
}

void ItalianChef::makePasta()
{
	std::cout << "The chef makes pasta\n";
}

void ItalianChef::makeSpecialDish()
{
	std::cout << "The chef makes chicken parm\n";
}