#ifndef THISCLASS_H
#define THISCLASS_H

class thisClass
{
public:
    void set(int a, int b, int c);
    void print() const;

    thisClass updateXYZ();
	     //Post: x = 2 * x; y = y + 2;
	     //	  z = z * z;

    thisClass(int a = 0, int b = 0,
                     int c = 0);
    virtual ~thisClass();

private:
    int x;
    int y;
    int z;
};
#endif // THISCLASS_H
