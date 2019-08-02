#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <polygon.h>


class triangle : public polygon
{
    public:
        triangle(double, double, const char *, int n_size = 10);
        double area();
        char *getName();
        virtual ~triangle();
    protected:
    private:
};

#endif // TRIANGLE_H
