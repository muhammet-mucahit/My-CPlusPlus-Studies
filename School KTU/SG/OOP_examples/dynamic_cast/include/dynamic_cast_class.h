#ifndef DYNAMIC_CAST_CLASS_H
#define DYNAMIC_CAST_CLASS_H
#include <stdlib.h>
//base class
class dynamic_cast_class
{
    public:
        dynamic_cast_class();
        virtual void funct1(){};
        virtual ~dynamic_cast_class();
    protected:
    private:
};

class Derived1:public dynamic_cast_class
{
    public:
       virtual void funct2(){};
} ;



#endif // DYNAMIC_CAST_CLASS_H
