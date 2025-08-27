#include "WnD.h"

WND::WND(int Height, int Weight) :
	Height{ Height }, Weight{ Weight }
{
}

WND::~WND()
{

}

int WND::GetHeight()
{
	return Height;
}

void WND::SetHeight(int Height)
{
	this->Height = Height;
}

int WND::GetWeight()
{
	return Weight;
}

void WND::SetWeight(int Weight)
{
	this->Weight = Weight;
}


