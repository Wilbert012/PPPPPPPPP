#include <iostream>

#include "Daffa.h"

Daffa::Daffa(int Height, int Weight) : 
	WND(Height, Weight)

{
}

Daffa::~Daffa()
{
}

void Daffa::DaffaIsSmart()
{
	std::cout << "Thank you :)\n";
}

void Daffa::DaffaIsUnsmart() 
{
	std::cout << "Impossible.\n";
}