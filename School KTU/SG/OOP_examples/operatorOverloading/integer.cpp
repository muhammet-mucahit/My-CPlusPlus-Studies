#include "integer.h"
#include <iostream>

using namespace std;
Integer::Integer(int nr)
{
    this->nr = nr;
}
Integer::operator int()
{
    return this->nr;
}
int Integer::operator+=(Integer o)
{
    this->nr = o.getNr() + this->nr;
    return this->nr;
}
