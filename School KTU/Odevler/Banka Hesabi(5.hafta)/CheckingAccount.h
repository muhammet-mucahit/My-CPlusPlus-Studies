#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class VadesizHesap : public Hesap{

	double islemUcreti;

public:
	VadesizHesap(double, double);
	void paraYatir(double);
	void paraCek(double);
};



#endif 
