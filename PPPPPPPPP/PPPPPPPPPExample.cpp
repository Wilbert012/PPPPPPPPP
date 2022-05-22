// Copyright Wilbert Bernadi Tomoh. All Rights Reserved.

#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"
using namespace std;


class Daffa {
public:
	void DaffaIsSmart() {
		cout << "Thank you :)" << endl;
	}
	void DaffaIsUnsmart() {
		cout << "Impossible" << endl;
	}
};

class Wilbert {
public:
	void Wilbert1() {
		cout << "You're welcome!" << endl;
	}
	void Wilbert2() {
		cout << "No, it's possible, but I agree with you." << endl;
	}
};

int main()
{

	Chef Chef{ 72, 189 };
	Chef.makeSpecialDish();

	ItalianChef ItalianChef{ 78, 199 };
	ItalianChef.makeSpecialDish();


	Daffa daffa;
	daffa.DaffaIsSmart();

	Wilbert wilbert;
	wilbert.Wilbert1();

	return 0;
}
