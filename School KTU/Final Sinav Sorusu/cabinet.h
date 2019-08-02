#ifndef CABINET_H
#define CABINET_H

enum Colors{ white, blue, red, green, yellow, black };

class Cabinet{

protected:
	double width;
	double height;
	double depth;
	Colors cabinetC;

public:
	Cabinet(double = 2, double = 2, double = 1, Colors = white);
	virtual double a_volume() = 0;
	void print();
};




#endif // !CABINET_H
