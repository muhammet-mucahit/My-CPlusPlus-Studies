#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include "complex.h"

using namespace std;

class matris {
	
	kompleks **list;
	int satir;
	int sutun;
	
public:
	matris(int str = 2 , int stn = 2 );
	matris(const matris&);
	void oku();
	void yaz();
	const matris& operator=(const matris&);
	matris operator+(const matris&) const;
	matris operator*(int);
	//void operator*(int);
	matris operator*(matris&);
	friend ostream& operator<<(ostream& , const matris&);
	friend istream& operator>>(istream& , matris&);
	~matris(); 
	
};


#endif
