#include <iostream>
#include "base.h"

using namespace std;

void final(int&);

int main(){

	int x;

	final(x);

	cout << endl << x;

	cout << endl;
}

void final(int &x){

	Base *p;
	p = new Base;

	p->Data();

	if (p->Kosegen_Toplami() < p->Max())
		x = p->Kosegen_Toplami();
	else
		x = p->Size();

	p->print();
}