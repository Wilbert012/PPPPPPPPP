#pragma once

#include "WND.h"

class Daffa : public WND
{
public:

	Daffa(int Height, int Weight);

	virtual ~Daffa();

	void DaffaIsSmart();
	void DaffaIsUnsmart();
};