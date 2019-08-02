#include <iostream>
#include "base.h"
#include "derived.h"

using namespace std;

int main(){

	Derived X, Y, *p = new Derived;

	X.Dizi_Al();
	Y.Dizi_Al();

	if (Y.Min() > X.Max()){
		X.Ekle(Y.Min());
		*p = X;
	}
	else{
		Y.Ekle(X);
		*p = Y;
	}

	p->print();
	cout << endl;
	Y.print();
	cout << endl;
}