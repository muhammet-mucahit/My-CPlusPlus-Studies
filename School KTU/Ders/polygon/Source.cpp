#include <iostream>
#include <typeinfo>
#include "triangle.h"
#include "rectangle.h"
#include "polygon.h"

#define MAX_POLYGON 10

using namespace std;
void print_area(polygon **p);

int main()
{
	polygon *ppoly[MAX_POLYGON];

	for (int i = 0; i < MAX_POLYGON / 2; i++)
		ppoly[i] = new rectangle(i + 5, i + 10, "Rectangle");

	for (int i = MAX_POLYGON / 2; i < MAX_POLYGON; i++)
		ppoly[i] = new triangle(i + 5, i + 10, "Triangle");

	print_area(ppoly);

	for (int i = 0; i < MAX_POLYGON; i++){
		delete ppoly[i];
	}
	return 0;
}

void print_area(polygon **p){
	for (int i = 0; i < MAX_POLYGON; i++){
		p[i]->print_area();
	}
}