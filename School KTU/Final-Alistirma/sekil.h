#ifndef SEKIL_H
#define SEKIL_H

class Sekil{

public:
	virtual void tanistir() = 0;
	virtual double alanHesapla() = 0;
	virtual double cevreHesapla() = 0;
	virtual friend ostream& operator<<(ostream&, Sekil*&);
	virtual ~Sekil();

public:
	double x;
	double y;

};


#endif // !SEKIL_H
