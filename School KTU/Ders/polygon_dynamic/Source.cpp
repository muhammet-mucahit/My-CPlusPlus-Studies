#include <iostream>
#include <typeinfo>
#include "triangle.h"
#include "rectangle.h"
#include "polygon.h"

enum color{
	color_blue,
	color_red,
	color_green
};
#define MAX_POLYGON 10

using namespace std;
void print_area(polygon *p[]);


int main()
{
	polygon *ppoly[MAX_POLYGON];

	for (int i = 0; i < MAX_POLYGON / 2; i++)
		ppoly[i] = new rectangle(i + 5, i + 10, "Rectangle");

	for (int i = MAX_POLYGON / 2; i < MAX_POLYGON; i++)
		ppoly[i] = new triangle(i + 5, i + 10, "Triangle");

	print_area(ppoly);

	for (int i = 0; i < MAX_POLYGON; i++){
		cout << "Deleting shape of a " << typeid(*ppoly[i]).name() << endl;
		delete ppoly[i];
	}

	return 0;
}


void print_area(polygon *p[]){
	triangle * pTriangle;
	rectangle * pRectangle;
	for (int i = 0; i < MAX_POLYGON; i++){
		pTriangle = dynamic_cast<triangle *> (p[i]);
		if (pTriangle != 0) {
			cout << "a triangle object" << endl;
			pTriangle->print_area();
		}
		else {
			pRectangle = dynamic_cast<rectangle *> (p[i]);
			cout << "a rectangle object" << endl;
			pRectangle->print_area();
		}
	}
}