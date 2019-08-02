#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

using namespace std;

class kompleks{
	
	friend ostream& operator<<(ostream& , const kompleks&);
	friend istream& operator>>(istream& , kompleks&);
	
public:
	
	void setKompleks(const double& gercek , const double& sanal);
	kompleks(double gercek = 0 , double sanal = 0);
	kompleks operator+(const kompleks& digerKompleks) const;
	kompleks operator*(const kompleks& digerKompleks) const;
	const kompleks& operator=(const kompleks&);
	bool operator==(const kompleks& digerKompleks) const;
	kompleks operator*(int);
	//void operator*(int);
	
private:
	double gercekKisim;
	double sanalKisim;
};

#endif









