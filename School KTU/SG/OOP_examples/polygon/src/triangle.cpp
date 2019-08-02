#include "triangle.h"
#include "string.h"

triangle::triangle(double w, double h, const char *_name, int n_size)
{
   x = w;
   y = h;
   poly_name = new char[n_size];
   strcpy(poly_name, _name);
}
char *triangle::getName(){
   return poly_name;
}
double triangle::area(){
   return x*y/2.0;
}
triangle::~triangle()
{
   delete [] poly_name;
    //dtor
}
