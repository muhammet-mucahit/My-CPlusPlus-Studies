#include <iostream>
#include "base.h"


using namespace std;

int main(){

	Base obj;
	int *temp;

	obj.Dizi_Al();

	int boyut = obj.getCift();

	temp = new int[boyut];

	obj.Cift(temp, boyut);

	for (int i = 0; i < boyut; i++)
		cout << temp[i] << " ";

	//cout << obj.Max() << endl;

	//obj.print();

	//cout << endl;
}