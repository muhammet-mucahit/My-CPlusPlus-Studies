#include <iostream>
#include "base.h"
#include "derived.h"

using namespace std;

void Derived::Ekle(Derived &obj1, Derived &obj2){

	int i,j = 0;
	Size = obj1.Size + obj2.Size;

	p = new int[Size];

	for (i = 0; i < obj1.Size; i++) p[i] = obj1.p[i];
	for (; j < obj2.Size; j++) { p[i] = obj2.p[j]; i++; }

}

int Derived::getSize(){

	return Size;
}

//void Derived::swap(Derived &obj1, Derived &obj2){
//
//	int *temp;
//
//	temp = obj1.p;
//	obj1.p = obj2.p;
//	obj2.p = temp;
//}


