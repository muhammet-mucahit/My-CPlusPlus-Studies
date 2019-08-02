#include <iostream>
#include "kitchenc.h"
#include "cabinet.h"

using namespace std;

//KitchenC operator+(KitchenC &, KitchenC &);

template<typename T>
T* sort(T *&array, T th, T no){

	T temp;

	for (int k = 0; k < 100; k++){
		for (int i = th; i < th + no; i++){
			for (int j = i + 1; j < th + no; j++){

				if (array[i] > array[j]){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
	}

	return array;
}

int main(){

	KitchenC obj1(5, 2, 2, 2, red);
	KitchenC obj2(5, 2, 2, 2, red);
	KitchenC obj3;// (obj1 + obj2);

	obj3 = obj1 + obj2;

	double *p = obj3.getVolumes();

	sort(p, 0.0, 5.0);

	for (int i = 0; i < 5; i++)
		cout << p[i] << " ";

}

//KitchenC operator+(KitchenC &obj1, KitchenC &obj2){
//
//	if (obj1.no_kitchenware > obj2.no_kitchenware){
//		KitchenC temp(obj1);
//		for (int i = 0; i < temp.no_kitchenware; i++){
//
//			temp.kw_volumes[i] += obj2.kw_volumes[i];
//		}
//	}
//
//	KitchenC temp(obj2);
//	for (int i = 0; i < temp.no_kitchenware; i++){
//
//		temp.kw_volumes[i] += obj1.kw_volumes[i];
//	}
//
//	return temp;
//}