// Copyright Wilbert Bernadi Tomoh. All Rights Reserved.

#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"
#include "Daffa.h"
#include "Wilbert.h"
using namespace std;

int main()
{

	Chef Chef{ 72, 189 };
	Chef.makeSpecialDish();

	ItalianChef ItalianChef{ 78, 199 };
	ItalianChef.makeSpecialDish();


	Daffa daffa{ 66, 190 };
	daffa.DaffaIsSmart();

	Wilbert wilbert{ 77, 177 };
	wilbert.WilbertYW();

	return 0;
}
