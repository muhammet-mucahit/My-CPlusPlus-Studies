#include <iostream>
#include "Account.h"

using namespace std;

Hesap::Hesap(double bky){
	
	bakiye = bky;

	if (bakiye < 0.0){

		bakiye = 0.0;
		cout << "Gecersiz Bakiye ! ! ! ";
	}
}

void Hesap::paraYatir(double yatirilan){

	bakiye = bakiye + yatirilan;
}

void Hesap::paraCek(double cekilen){

	if (cekilen <= bakiye){
		bakiye = bakiye - cekilen;
	}
	else
		cout << "Para cekme miktariniz hesabinizdaki bakiyeyi asmistir ! ! !";
}

double Hesap::bakiyeDondur(){

	return bakiye;
}








