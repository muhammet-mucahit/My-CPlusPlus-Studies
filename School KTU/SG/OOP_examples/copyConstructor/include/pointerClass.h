#ifndef POINTERCLASS_H
#define POINTERCLASS_H

class pointerClass
{
public:
     void print() const;
     void setData();
     void destroyP();

     pointerClass();

     virtual ~pointerClass();

     pointerClass(const pointerClass &otherObject);

private:
    int x;
    int lenP;
    int *p;
};

#endif // POINTERCLASS_H
