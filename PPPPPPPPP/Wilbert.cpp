#include <iostream>

#include "Wilbert.h"

Wilbert::Wilbert(int Height, int Weight) :
	WND(Height, Weight)

{
}

Wilbert::~Wilbert()
{
}

void Wilbert::WilbertYW()
{
	std::cout << "You're welcome!\n";
}

void Wilbert::WilbertNIPBIAWY()
{
	std::cout << "No, it's possible, but I agree with you.\n";
}