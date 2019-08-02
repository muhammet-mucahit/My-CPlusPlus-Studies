#include <iostream>
#include "CheckingAccount.h"

using namespace std;

VadesizHesap::VadesizHesap(double bky, double isUcret) : Hesap(bky){

	islemUcreti = isUcret;
}

void VadesizHesap::paraYatir(double yatirilan){
	
	double kalan = yatirilan - islemUcreti;
	Hesap::paraYatir(kalan);
}

void VadesizHesap::paraCek(double cekilen){

	double kalan = cekilen + islemUcreti;
	Hesap::paraCek(kalan);
}