#include <iostream>
#include "base.h"

using namespace std;

void Base::Dizi_Al(){

	cout << "Boyutu giriniz : "; cin >> boyut;

	dizi = new int[boyut];

	for (int i = 0; i < boyut; i++){

		cout << "Dizi[" << i << "] = "; cin >> dizi[i];
	}

}

int Base::Max(){

	int max = 0;

	for (int i = 0; i < boyut; i++){


		if (dizi[i] > max) max = dizi[i];
	}

	return max;
}

void Base::Ekle(Base &obj){

	int *temp, i,j = 0;

	temp = new int[boyut + obj.boyut];

	for (i = 0; i < boyut; i++) { 

		temp[i] = dizi[i];
	};

	for (; i < boyut + obj.boyut; i++) {

		temp[i] = obj.dizi[j];
		j++;
	};

	boyut += obj.boyut;
	dizi = new int[boyut];

	for (i = 0; i < boyut; i++){ 

		dizi[i] = temp[i];
	};

}

void Base::Ekle(int sayi){

	int *temp, i;

	temp = new int[boyut + 1];

	for (i = 0; i < boyut; i++) temp[i] = dizi[i];

	for (; i < boyut + 1; i++) temp[i] = sayi;

	boyut += 1;
	dizi = new int[boyut];

	for (i = 0; i < boyut; i++) dizi[i] = temp[i];
}

void Base::print(){

	for (int i = 0; i < boyut; i++){

		cout << dizi[i] << " ";
	}
}

Base::~Base(){

	delete[] dizi;
}