#pragma once

class PPPPPPPPP
{
private:
	int Height;
	int Weight;

public:

	PPPPPPPPP(int Height, int Weight);

	virtual ~PPPPPPPPP();
	
	int GetHeight();

	void SetHeight(int Height);

	int GetWeight();

	void SetWeight(int Weight);

	virtual void makeSpecialDish() = 0;
};