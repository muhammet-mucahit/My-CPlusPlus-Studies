#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "polygon.h"

class triangle:public polygon
{
    public:
        triangle();
        double area();
        virtual ~triangle();
    protected:
    private:
};

#endif // TRIANGLE_H
