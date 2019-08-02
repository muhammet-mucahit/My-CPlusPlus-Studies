#ifndef BOOKCASE_H
#define BOOKCASE_H

#include "cabinet.h"

class Bookcase : public Cabinet{

private:
	int no_books;
public:
	Bookcase(int, double, double, double, Colors);
	double a_volume();
};

#endif // !BOOKCASE_H
