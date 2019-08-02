#ifndef GARDEROBE_H
#define GARDIROBE_H

#include "cabinet.h"

class Gardirobe : public Cabinet{

private:
	int no_clothes;
	bool la_coatTree;
public:
	Gardirobe(int, bool, double, double, double, Colors);
	double a_volume();
};
#endif // !GARDEROBE_H
