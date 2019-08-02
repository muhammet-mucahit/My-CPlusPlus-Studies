#include <iostream>
#include "base.h"

using namespace std;

void soru2();

int main(){

	soru2();
}

void soru2(){

	Base A, *p;
	p = new Base;

	A.Dizi_Al();
	p->Dizi_Al();

	if (p->Max() > A.Max())
		p->Ekle(A);
	else
		p->Ekle(A.Max());

	p->print();
}