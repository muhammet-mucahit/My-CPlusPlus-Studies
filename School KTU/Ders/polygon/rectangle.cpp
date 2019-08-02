#include "rectangle.h"
#include <string>
#include <iostream>

using namespace std; 

rectangle::rectangle(double w, double h, const char* _name, int n_size)
{
	//ctor
	x = w;
	y = h;
	poly_name = new char[n_size];
	//strcpy(poly_name, _name);
}

void rectangle::print_area(){
	cout << "Area of " << this->getName() << " is " << this->area() << endl;
}

double rectangle::area(){
	return x * y;
}

char * rectangle::getName(){
	return poly_name;
}

rectangle::~rectangle()
{
	delete[] poly_name;
	//dtor
}