#ifndef BASECLASS_H
#define BASECLASS_H

using namespace std;

class baseClass
{
public:
    virtual void print();
    baseClass(int u = 0);

private:
    int x;
};


#endif // BASECLASS_H
