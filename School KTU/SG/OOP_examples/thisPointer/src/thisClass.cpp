#include "thisClass.h"
#include <iostream>
using namespace std;
thisClass::thisClass(int a, int b, int c)
{
   x = a;
   y = b;
   z = c;
    //ctor
}

thisClass thisClass::updateXYZ()
{
   x = 2 * x;
   y = y + 2;
   z = z * z;
   return *this;
}

void thisClass::set(int a, int b, int c)
{
   x = a;
   y = b;
   z = c;
}

void thisClass::print() const
{
	  cout<<"x = "<<x
	      <<", y = "<<y
	      <<", z = "<<z<<endl;
}



thisClass::~thisClass()
{
    //dtor
}
