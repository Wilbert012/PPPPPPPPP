#pragma once

class WND
{
private:
	int Height;
	int Weight;

public:

	WND(int Height, int Weight);

	virtual ~WND();

	int GetHeight();

	void SetHeight(int Height);

	int GetWeight();

	void SetWeight(int Weight);

	virtual void WNothing();
};