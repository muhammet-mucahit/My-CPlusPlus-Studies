#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "polygon.h"

class rectangle: public polygon
{
    public:
        rectangle();
        double area();
        virtual ~rectangle();
    protected:
    private:
};

#endif // RECTANGLE_H
