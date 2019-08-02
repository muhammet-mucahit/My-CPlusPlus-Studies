#include <iostream>
#include "base.h"

using namespace std;

Base::Base(){

	satir = 2;
	sutun = 2;

	matris = new int*[satir];

	for (int i = 0; i < satir; i++)
		matris[i] = new int[sutun];
}

void Base::Data(){

	cout << "Satir sayisini giriniz : "; cin >> satir;
	cout << "Sutun sayisini giriniz : "; cin >> sutun;

	matris = new int*[satir];

	for (int i = 0; i < satir; i++)
		matris[i] = new int[sutun];

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){

			cout << "Matris[" << i << "][" << j << "] = "; cin >> matris[i][j];
		}
	}

}

void Base::print(){

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){

			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
}

void Base::setSatir(int a){
	satir = a;
}

void Base::setSutun(int b){
	sutun = b;
}

int Base::getSatir(){

	return satir;
}

int Base::getSutun(){

	return sutun;
}

Base::~Base(){

	for (int i = 0; i < satir; i++)
		delete matris[i];

	delete matris;
}