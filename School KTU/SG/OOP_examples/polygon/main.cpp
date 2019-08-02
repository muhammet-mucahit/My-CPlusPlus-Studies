#include <iostream>
#include <triangle.h>
#include <rectangle.h>

using namespace std;
void print_area(polygon *p);
void print_area(polygon &p);
int main()
{
    polygon *ppoly1 = new rectangle( 10, 5, "Rectangle");
    polygon *ppoly2 = new triangle(10, 5, "Triangle");
    ppoly1->print_area();
    ppoly2->print_area();
    print_area(ppoly1);
    print_area(*ppoly2);

    delete ppoly1;
    delete ppoly2;

    return 0;
}

void print_area(polygon &p){
   cout << p.area() << " is the area of the " << p.getName() << endl;
}

void print_area(polygon *p){
   cout << p->area() << " is the area of the " << p->getName() << endl;
}

