#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h" 

class MevduatHesabi : public Hesap{

	double faizOrani;

public:
	MevduatHesabi(double,double);
	double faizHesapla();
};




#endif 
