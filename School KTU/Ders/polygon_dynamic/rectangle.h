#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"


class rectangle : public polygon
{
public:
	rectangle(double, double, const char *, int n_size = 10);
	double area();
	char *getName();
	void print_area();
	virtual ~rectangle();
protected:
private:
};

#endif // RECTANGLE_H