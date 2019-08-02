#include <iostream>
#include "derived.h"
#include "base.h"

using namespace std;

int Derived::Min(){

	int min = 100000;

	for (int i = 0; i < boyut; i++){

		if (dizi[i] < min){
			min = dizi[i];
		}
	}

	return min;
}