#ifndef KITCHENC_H
#define KITCHENC_H

#include "cabinet.h"

class KitchenC : public Cabinet{

private:
	int no_kitchenware;
	double *kw_volumes;

public:
	KitchenC(int = 0, double = 0, double = 0, double = 0, Colors = white);
	KitchenC(KitchenC &);
	void kw_input();
	double a_volume();
	void print();
	double* getVolumes();
	KitchenC& operator=(KitchenC&);
//	friend KitchenC operator+(KitchenC &, KitchenC &);
	KitchenC operator+(KitchenC &);
	~KitchenC();
};

#endif // !KITCHENC_H
