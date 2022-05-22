#pragma once

#include "WND.h"

class Daffa : public WND
{
public:

	Daffa(int Height, int Weight);

	virtual ~Daffa();

	virtual void WNothing() ;
	void DaffaIsSmart();
	void DaffaIsUnsmart();
};