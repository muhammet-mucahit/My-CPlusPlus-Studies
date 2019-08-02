#include <iostream>
#include "cabinet.h"
#include "kitchenc.h"

using namespace std;

KitchenC::KitchenC(int ware, double wi, double hei, double dep, Colors color)
: Cabinet(wi, hei, dep, color)
{
	no_kitchenware = ware;

	kw_volumes = new double[ware];

	kw_input();
}

KitchenC::KitchenC(KitchenC &obj){

	no_kitchenware = obj.no_kitchenware;

	kw_volumes = new double[no_kitchenware];

	for (int i = 0; i < no_kitchenware; i++)
		kw_volumes[i] = obj.kw_volumes[i];
}

void KitchenC::kw_input(){

	for (int i = 0; i < no_kitchenware; i++)
		cin >> kw_volumes[i];
}

double KitchenC::a_volume(){

	return (width * height * depth);
}

void KitchenC::print(){

	cout << "Kitchenware = " << no_kitchenware << endl;
	Cabinet::print();
}

KitchenC &KitchenC::operator=(KitchenC &obj){

	no_kitchenware = obj.no_kitchenware;

	kw_volumes = new double[no_kitchenware];

	for (int i = 0; i < no_kitchenware; i++)
		kw_volumes[i] = obj.kw_volumes[i];

	return *this;

}

double* KitchenC::getVolumes(){

	return kw_volumes;
}

KitchenC KitchenC::operator+(KitchenC &obj){

	if (no_kitchenware > obj.no_kitchenware){
		KitchenC temp(*this);
		for (int i = 0; i < temp.no_kitchenware; i++){

			temp.kw_volumes[i] += obj.kw_volumes[i];
		}
	}

	KitchenC temp(obj);
	for (int i = 0; i < temp.no_kitchenware; i++){

		temp.kw_volumes[i] += kw_volumes[i];
	}

	return temp;
}

KitchenC::~KitchenC(){

	delete kw_volumes;
}