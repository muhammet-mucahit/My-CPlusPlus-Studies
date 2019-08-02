#ifndef BASE_H
#define BASE_H

class Base{


public:
	void Dizi_Al();
	int Max();
	void Ekle(Base &);
	void Ekle(int);
	void print();
	~Base();


protected:
	int boyut;
	int *dizi;

};

#endif // !BASE_H
