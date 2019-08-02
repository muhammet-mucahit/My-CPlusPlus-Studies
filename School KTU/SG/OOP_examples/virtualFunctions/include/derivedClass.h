#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include "baseClass.h"

class derivedClass: public baseClass {

public:
    void print();
    derivedClass(int u = 0, int v = 0);

private:
    int a;
};

#endif // DERIVEDCLASS_H
