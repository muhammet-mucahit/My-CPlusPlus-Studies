#include <iostream>
using namespace std;
#include "polygon.h"

//polygon::polygon()
//{
//	//ctor
//}
/*double polygon::area(){
return 0;
}*/
/*
void polygon::print_area(){
cout<< "Area of " << this->getName() << " is " << this->area() << endl;
}*/
void polygon::set_values(double width, double height){
	x = width;
	y = height;
}

polygon::~polygon()
{
	//dtor
}