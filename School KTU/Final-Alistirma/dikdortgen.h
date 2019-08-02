#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H

#include "sekil.h"

class Dikdortgen :public Sekil{

public:
	Dikdortgen(double, double);
	void tanistir();
	double alanHesapla();
	double cevreHesapla();
	virtual ~Dikdortgen();

private:
};


#endif // !DIKDORTGEN_H
