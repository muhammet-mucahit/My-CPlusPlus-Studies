#ifndef ACCOUNT_H
#define ACCOUNT_H

class Hesap{

	double bakiye;

public:
	Hesap(double); 
	void paraYatir(double);
	void paraCek(double);
	double bakiyeDondur();
};



#endif 
