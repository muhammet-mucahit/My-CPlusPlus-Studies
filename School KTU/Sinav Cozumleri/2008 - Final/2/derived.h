#ifndef DERIVED_H
#define DERIVED_H

class Derived:public Base {

public:
	friend void operator+=(Derived&, Derived&);
	friend void operator*=(Derived&, Derived*&);
	

};


#endif