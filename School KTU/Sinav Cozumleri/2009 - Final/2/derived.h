#ifndef DERIVED_H
#define DERIVED_H


class Derived : public Base{

public:
	friend void operator+=(Derived&, Derived&);
	void Ekle(Derived&, Derived&);
	int getSize();
	//void swap(Derived&, Derived&);
};

#endif