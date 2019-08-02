#ifndef BASE_H
#define BASE_H


class Base{

public:
	//Base(int);
	int getCift();
	void Dizi_Al();
	int Max();
	void Cift(int *&, int &);
	void print();
	~Base();

private:
	int *p;
	int Size;

};

#endif