#include "baseClass.h"

void baseClass::print()
{
    cout<<"In baseClass x = "<<x<<endl;
}

baseClass::baseClass(int u)
{
    x = u;
}
