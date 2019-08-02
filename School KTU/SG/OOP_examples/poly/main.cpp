#include <iostream>
#include "polygon.h"
#include "triangle.h"
#include "rectangle.h"

using namespace std;
void print_area(polygon *poly) {
   cout << "Area " << poly->area() << endl;
}
int main()
{
    rectangle rect;
    triangle  tri;
    //polygon   poly;
    polygon *ppoly1 = & rect;
    polygon *ppoly2 = & tri;
    //polygon *ppoly3 = & poly;

    ppoly1->set_values(3,5);
    ppoly2->set_values(4,6);
    //ppoly3->set_values(4,5);
    print_area(ppoly1);
    print_area(ppoly2);
    //cout << "Area of rectangle " << ppoly1->area() << endl;
    //cout << "Area of triangle " << ppoly2->area() << endl;
     //cout << "Area of base " << ppoly3->area() << endl;
    return 0;
}
