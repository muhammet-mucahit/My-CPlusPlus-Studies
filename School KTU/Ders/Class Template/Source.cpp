#include <iostream>
#include "point.h"

using namespace std;

void operationOnPoints();

template<typename T, typename T2>
T add(T var1, T2 var2)
{
	return var1 + var2;
}


typedef Point2D<int> Point2DInt;
typedef Point2D<double> Point2DDouble;

int main()
{
	operationOnPoints();

	//cout << add<double, double>(2, 5.6) << endl;
	//cout << static_cast<int>(6.5) << endl;

	return 0;
}
void operationOnPoints()
{

	Point2DDouble b;
	Point2DDouble d(4, 5);
	Point2DDouble e(4, 5);

	//b = d + e;
	//b = add(d, e);

	//cout << d.getX() << endl;
	//cout << b.getX() << endl;
}