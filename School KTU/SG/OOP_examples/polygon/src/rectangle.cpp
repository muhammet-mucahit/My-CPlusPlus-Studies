#include "rectangle.h"
#include "string.h"
rectangle::rectangle(double w, double h, const char* _name, int n_size)
{
    //ctor
   x = w;
   y = h;
   poly_name = new char[n_size];
   strcpy(poly_name, _name);
}
double rectangle::area(){
   return x * y;
}

char * rectangle::getName(){
   return poly_name;
}

rectangle::~rectangle()
{
   delete [] poly_name;
    //dtor
}
