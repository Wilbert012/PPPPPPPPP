#pragma once
#include <iostream>

#include "PPPPPPPPP.h"

PPPPPPPPP::PPPPPPPPP(int Height, int Weight) :
	Height{ Height }, Weight{ Weight }
{
}

PPPPPPPPP::~PPPPPPPPP()
{

}

int PPPPPPPPP::GetHeight()
{
	return Height;
}

void PPPPPPPPP::SetHeight(int Height)
{
	this->Height = Height;
}

int PPPPPPPPP::GetWeight()
{
	return Weight;
}

void PPPPPPPPP::SetWeight(int Weight)
{
	this->Weight = Weight;
}

void PPPPPPPPP::makeSpecialDish()
{
	std::cout << "Welcome to an improvement of my 'PPPPPPPPP' C++ Inheritance code!\n";
}
