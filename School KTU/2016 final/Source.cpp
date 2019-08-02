#include <iostream>
#include <string>

using namespace std;

enum depolar{Istanbul, Erzincan, Antalya, Izmir, Ankara};

class Araba{
	
protected:
	string m_markasi;
	string m_modeli;
	int m_stok;
	depolar m_bulunduguDepo;

public:
	friend int toplamStok(Araba **);
	virtual void yaz() = 0;
	~Araba();
};

Araba::~Araba(){
	//dtor
}

class Taksi :public Araba{

private:
	int *ozellik;

public:
	Taksi();
	Taksi(string marka, string model, int yolcuSayisi, int bagajHacmi, int stok);
	void yaz();
	~Taksi();
};

Taksi::Taksi(){

	m_markasi = "";
	m_modeli = "";
	m_stok = 0;

	ozellik = new int[2];
	ozellik[0] = 0;
	ozellik[1] = 0;
}

Taksi::Taksi(string marka, string model, int yolcuSayisi, int bagajHacmi, int stok){

	m_markasi = marka;
	m_modeli = model;
	m_stok = stok;

	ozellik = new int[2];
	ozellik[0] = yolcuSayisi;
	ozellik[1] = bagajHacmi;
}

void Taksi::yaz(){

	cout << m_markasi << " " << m_modeli << " " << ozellik[0] << " " << ozellik[1] << " " << m_stok << endl;
}

Taksi::~Taksi(){

	delete[] ozellik;
}

class Kamyon :public Araba{

private:
	int *ozellik;

public:
	Kamyon();
	Kamyon(string marka, string model, int tasimaKapasitesi, int kasaHacmi, int stok);
	void yaz();
	~Kamyon();
};

Kamyon::Kamyon(){

	m_markasi = "";
	m_modeli = "";
	m_stok = 0;
	
	ozellik = new int[2];
	ozellik[0] = 0;
	ozellik[1] = 0;
}

Kamyon::Kamyon(string marka, string model, int tasimaKapasitesi, int kasaHacmi, int stok){

	m_markasi = marka;
	m_modeli = model;
	m_stok = stok;

	ozellik = new int[2];
	ozellik[0] = tasimaKapasitesi;
	ozellik[1] = kasaHacmi;
}

void Kamyon::yaz(){

	cout << m_markasi << " " << m_modeli << " " << ozellik[0] << " " << ozellik[1] << " " << m_stok << endl;
}

Kamyon::~Kamyon(){

	delete[] ozellik;
}

void yaz(Araba *araba){

	araba->yaz();
}

int toplamStok(Araba **araba){

	int toplam = 0;
	for (int i = 0; i < 5; i++)
		toplam += araba[i]->m_stok;

	return toplam;
}

int main(){

	Araba *araba[5];

	araba[0] = new Taksi("MERCEDES", "AMG", 5, 20, 100);
	araba[1] = new Taksi("BMW", "i7", 5, 30, 200);
	araba[2] = new Taksi("ASTON MARTIN", "VANQUISH", 2, 10, 50);
	araba[3] = new Kamyon("VOLVO", "PENTA", 5, 700, 125);
	araba[4] = new Kamyon("RENAULT", "DIAON", 5, 600, 110);


	for (int i = 0; i < 5; i++)
		yaz(araba[i]);
	
	cout << toplamStok(araba) << endl;
}

