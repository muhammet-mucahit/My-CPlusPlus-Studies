#include <iostream>
#include "sekil.h"
#include "daire.h"
#include "dikdortgen.h"

using namespace std;

void sekilTanistir(Sekil *);
double sekilAlaniHesapla(Sekil *);
double sekilCevresiHesapla(Sekil *);

ostream& operator<<(ostream &osObj, Sekil *&daireObj){

	osObj << daireObj->x << " " << daireObj->y;

	return osObj;
}

int main(){

	Daire obj1(2);
	Daire obj2(2);
	Daire obj3(0);

	obj3 = obj1 + obj2;

	cout << obj1.alanHesapla() << endl;
	cout << obj3.alanHesapla();

	//Daire obj1(3);
	//Daire obj2(obj1);

	//cout << obj1.alanHesapla() << endl;
	//cout << obj2.alanHesapla();

	//Sekil *p = new Daire(3);

	//cout << sekilAlaniHesapla(p);

	//Sekil *dikdortgen;
	//Sekil *daire;

	//dikdortgen = new Dikdortgen(3,3);
	//daire = new Daire(3);

	//delete daire;
	//delete dikdortgen;

	//Sekil *a;
	//Daire c(3);
	//Dikdortgen b(3, 3); // sondan baslanarak destructor cagriliyor.
	
	//Dikdortgen *p1; p1 = new Dikdortgen(2,2);
	//Daire	   *p2; p2 = new Daire(3);

	//Sekil *p3 = (Sekil*)p1;
	//Sekil *p4 = (Sekil*)p2;

	//sekilTanistir(p1); // sekil tanistira direkt dikdortgen veya daire nesnesi verildiginde calisiyor.
	//sekilTanistir(p2);

	//sekilTanistir(p3);
	//sekilTanistir(p4);

	//Sekil *p1Sekil;
	//Sekil *p2Sekil;

	//p1Sekil = new Daire(3);
	//p2Sekil = new Dikdortgen(3,4);


	//sekilTanistir(p1Sekil);
	//sekilTanistir(p2Sekil);
	//
	//delete p1Sekil;
	//delete p2Sekil;

	cout << endl;
	

}

void sekilTanistir(Sekil *obj){

	obj->tanistir();
	cout << "Alanim: " << obj->alanHesapla() << ", Cevrem: " << obj->cevreHesapla() << endl;
}

double sekilAlaniHesapla(Sekil *obj){

	return (obj->alanHesapla());
}

double sekilCevresiHesapla(Sekil *obj){

	return (obj->cevreHesapla());
}