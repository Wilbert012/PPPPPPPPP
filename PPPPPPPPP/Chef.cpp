#include <iostream>

#include "Chef.h"

Chef::Chef(int Height, int Weight) :
	PPPPPPPPP(Height, Weight)

{
}

Chef::~Chef()
{
}

void Chef::Dish()
{
}

void Chef::makeChicken() 
{
	std::cout << "The chef makes yummy chicken\n";
}

void Chef::makeSalad() 
{
	std::cout << "The chef makes salad\n";
}

void Chef::makeSpecialDish() 
{
	std::cout << "The chef makes bbq ribs\n";
}