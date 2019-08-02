#include <iostream>
#include "base.h"
#include "derived.h"

using namespace std;

void operator+=(Derived &obj1, Derived &obj2){

	for (int i = 0; i < obj1.Size; i++)
		obj1.p[i] += obj2.p[i];

}

void swap(Derived &obj1, Derived &obj2){

	int *temp;
	int boyut; 

	boyut = obj1.getSize();

	temp = new int[boyut];

	temp = obj1.p;
	obj1.p = obj2.p;
	obj2.p = temp;
}

int main(){

	Derived A, B, C;

	A.Dizi_Al(); 
	B.Dizi_Al();

	if (A.getSize() == B.getSize()){

		if (A.Max() > B.Max())
			swap(A, B);
		else
			A += B;

		A.print();
	}
	else{

		C.Ekle(A, B);
	}

	C.print();

	cout << endl;

	return 0;

}