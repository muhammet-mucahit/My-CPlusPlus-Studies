#include <iostream>
#include "thisClass.h"
using namespace std;

int main()
{
    thisClass obj1(3, 5, 7);		//Line 1
	thisClass obj2;			//Line 2

	cout<<"Object 1: ";					//Line 3
	obj1.print();					//Line 4

    //Updates and Copies over the data member through this pointer
	//this pointer uzerinden uye degiskenlerin degerlerini gunceller ve
	//yeni defgerleri obj2'ye kopyalar.

	obj2 = obj1.updateXYZ();

	cout<<"After updating object 1: ";		//Line 6
	obj1.print();					//Line 7

	cout<<"Object 2: ";					//Line 8
	obj2.print();
    return 0;
}
