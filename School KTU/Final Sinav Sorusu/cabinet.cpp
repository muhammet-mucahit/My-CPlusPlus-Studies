#include <iostream>
#include "cabinet.h"

using namespace std;

Cabinet::Cabinet(double wi, double hei, double dep, Colors color){

	width = wi;
	height = hei;
	depth = dep;
	cabinetC = color;
}

void Cabinet::print(){

	cout << "Width = " << width << endl;
	cout << "Height = " << height << endl;
	cout << "Depth = " << depth << endl;
	cout << "Volume = " << a_volume() << endl;

}