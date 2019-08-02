#include <iostream>
#include "sekil.h"
#include "dikdortgen.h"

using namespace std;

Dikdortgen::Dikdortgen(double u, double k){

	x = u;
	y = k;
}

void Dikdortgen::tanistir(){

	cout << "Ben bir dikdortgenim !" << endl;
}

double Dikdortgen::alanHesapla(){

	return (x * y);
}

double Dikdortgen::cevreHesapla(){

	return (2 * (x + y));
}

Dikdortgen::~Dikdortgen(){

	cout << "DIKDORTGEN YIKICI" << endl;
}