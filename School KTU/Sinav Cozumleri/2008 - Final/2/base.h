#ifndef BASE_H
#define BASE_H

class Base{

public:
	Base();
	void Data();
	void print();
	void setSatir(int);
	void setSutun(int);
	int getSatir();
	int getSutun();
	~Base();

protected:
	int **matris;
	int satir;
	int sutun;
};




#endif 