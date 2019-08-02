#include <iostream>
#include "point.h"

using namespace std;
/* inheritance between classes */

void operationOnPoints();

//Please define a template function here that can take any parameters as arguments
//Using templates.

template <typename T1, typename T2>
T1 multiply(T1 input1, T2 input2){
    return input1 * input2;
}

int main()
{
    operationOnPoints();
    //The template parameters can be casted using angled brackets <>
    //add<double, double>(5, 6.5);
    double result =  multiply<double, double>(5, 6.5);

    return 0;
}


void operationOnPoints()
{
    Point2D p2(10, 67);

    p2.Point::setX(5);

    cout << p2.getX() << endl;
    cout << p2.getY() << endl;
}
