#ifndef DAIRE_H
#define DAIRE_H

#include "sekil.h"

class Daire :public Sekil{

public:
	Daire(double);
	void tanistir();
	double alanHesapla();
	double cevreHesapla();
	Daire operator+(Daire);
	//friend ostream& operator<<(ostream&, Daire&);
	virtual ~Daire();

private:
};

#endif // !DAIRE_H
