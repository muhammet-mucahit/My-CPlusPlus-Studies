#include <iostream>
#include "base.h"
#include "derived.h"

using namespace std;

bool Toplanabilirmi(Derived &obj1, Derived *&obj2);

void operator+=(Derived &obj1, Derived &obj2){

	for (int i = 0; i < obj1.getSatir(); i++){
		for (int j = 0; j < obj1.getSutun(); j++){

			obj1.matris[i][j] += obj2.matris[i][j];
		}
	}
}

void operator*=(Derived &obj1, Derived *&obj2){

	int **temp;

	int str = obj2->getSatir();
	int stn = obj1.getSutun();

	temp = new int*[str];

	for (int i = 0; i < str; i++)
		temp[i] = new int[stn];


	for (int i = 0; i < obj1.getSatir(); i++){
		for (int j = 0; j < obj1.getSutun(); j++){

			temp[i][j] = obj1.matris[i][j];
		}
	}

	for (int i = 0; i < obj2->getSatir(); i++){
		for (int j = 0; j < obj2->getSutun(); j++){

			temp[i][j] *= obj2->matris[i][j];
		}
	}

	obj1.setSatir(str);
	obj1.setSutun(stn);

	obj1.matris = temp;

}

int main(){

	Derived X, *q;
	q = new Derived();

	X.Data(); 
	q->Data();

	if (Toplanabilirmi(X, q)){
	
		X += *q;
	}

	else if (X.getSutun() == q->getSatir()){
	
		X *= q;
	}
	
	X.print();

	delete q;

}

bool Toplanabilirmi(Derived &obj1, Derived *&obj2){
	
	return (obj1.getSatir() == obj2->getSatir() && obj1.getSutun() == obj2->getSutun());

}
