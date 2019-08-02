#include <iostream>
#include "sekil.h"
#include "daire.h"

using namespace std;

Daire::Daire(double r){

	x = 3.14;
	y = r;
}

Daire Daire::operator+(Daire obj){

	Daire temp(0);

	temp.x = x;
	temp.y = y + obj.y;

	return temp;
}

void Daire::tanistir(){

	cout << "Ben bir daireyim !" << endl;
}

double Daire::alanHesapla(){

	return (x * y * y);
}

double Daire::cevreHesapla(){

	return (2 * x * y);
}

Daire::~Daire(){

	cout << "DAIRE YIKICI" << endl;
}


