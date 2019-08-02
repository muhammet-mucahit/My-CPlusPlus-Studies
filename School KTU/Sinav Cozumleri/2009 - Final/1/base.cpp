#include <iostream>
#include "base.h"

using namespace std;

//Base::Base(int boyut){
//
//	Size = boyut;
//
//	p = new int[boyut];
//}

int Base::getCift(){

	int count = 0;

	for (int i = 0; i < Size; i++){

		if (p[i] % 2 == 0){
			count++;
		}
	}

	return count;
}

void Base::Dizi_Al(){

	int boyut, i = 0;

	cout << "Boyut giriniz = "; cin >> boyut;

	Size = boyut;
	p = new int[boyut];

	while (i < boyut){
		
		cout << "Dizi[" << i << "] = "; cin >> p[i];
		i++;
	}
}

int Base::Max(){

	int max = 0;

	for (int i = 0; i < Size; i++){
		
		if (p[i] > max){
			max = p[i];
		}
	}

	return max;
}

void Base::Cift(int *&q, int &boyut){

	int k = 0;
	for (int i = 0; i < Size; i++){
		
		if (p[i] % 2 == 0){
			q[k] = p[i];
			k++;
		}
	}
}

void Base::print(){

	for (int i = 0; i < Size; i++){
		
		cout << p[i] << " ";
	}
}

Base::~Base(){

	delete[] p;
}