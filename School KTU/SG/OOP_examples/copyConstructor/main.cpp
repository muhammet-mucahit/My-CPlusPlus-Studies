#include <iostream>
#include "pointerClass.h"

#define shallow_copy 1
using namespace std;

int main()
{

    pointerClass firstObject;

    firstObject.setData();

#if shallow_copy
    pointerClass secondObject;
    secondObject = firstObject;
#else
    pointerDataClass secondObject(firstObject);
#endif

    secondObject.print();						//Line 8

    cout << "Hello world!" << endl;
    return 0;
}
