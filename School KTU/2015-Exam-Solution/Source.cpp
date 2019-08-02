#include <iostream>

#include <string>
#include <iostream>
#include <memory.h>

using namespace std;
//2 points
enum depolar{ depo1, depo2, depo3, depo4, depo5 };

class Araba //1 points
{
public: //3 points, Abstract
	virtual ~Araba(); //1 points destructor

	virtual void yaz() = 0; //3 points
	friend int stokHesapla(Araba **, int); //3 points
	friend void DepoDegistir(Araba& araba1, Araba& araba2);
protected: //2 points
	depolar m_bulunduguDepo;
	string m_markasi;
	string m_modeli;
	int m_stok;
private:
};

class Kamyon : public Araba //2 points
{
public: //2 points
	Kamyon(int stok, depolar depo, int tonaj, int kasa_hacmi, string marka, string model);
	Kamyon();
	virtual ~Kamyon(); //1 points

	void operator=(Kamyon digeri);
	void yaz();

protected:
private: // 1 points
	int *ozelik;
};

class Taksi :public Araba //2 points
{
public: //2 points
	Taksi(int stok, depolar depo, int yolcuSayisi, int bagajHacmi, string marka, string model);
	Taksi();
	virtual ~Taksi(); //1 points

	void operator=(Taksi digeri);
	void yaz();
protected:
private: // 1 points
	int * ozelik;
};


Araba::~Araba()
{
	//dtor
}

Kamyon::Kamyon(int stok, depolar depo, int tonaj, int kasa_hacmi, string marka, string model)
{  // 3
	m_markasi = marka;
	m_modeli = model;
	m_bulunduguDepo = depo;
	m_stok = stok;

	ozelik = new int[2];
	ozelik[0] = tonaj;
	ozelik[1] = kasa_hacmi;
}

Kamyon::Kamyon()
{  //2 points
	m_markasi = "";
	m_modeli = "";
	m_stok = 0;

	ozelik = new int[2];
	ozelik[0] = 0;
	ozelik[1] = 0;
}

Kamyon::~Kamyon()
{
	// 1 points
	delete[]ozelik;
	//dtor
}

void Kamyon::yaz(){ // 1 points
	cout << "Markasi : " << m_markasi << endl << "Modeli : " << m_modeli << endl << "Stok Adedi : " << m_stok << endl;;
	cout << "Tonaj : " << ozelik[0] << endl << "Kasa Hacmi : " << ozelik[1] << endl << endl;
}

void Kamyon::operator=(Kamyon digeri) {
	memcpy(ozelik, digeri.ozelik, sizeof(ozelik));
	m_markasi = digeri.m_markasi;
	m_modeli = digeri.m_modeli;
	m_bulunduguDepo = digeri.m_bulunduguDepo;
}


Taksi::Taksi(int stok, depolar depo, int yolcuSayisi, int bagajHacmi, string marka, string model)
{  //3 points
	m_markasi = marka;
	m_modeli = model;
	m_bulunduguDepo = depo;
	m_stok = stok;

	ozelik = new int[2];
	ozelik[0] = yolcuSayisi;
	ozelik[1] = bagajHacmi;
}

Taksi::Taksi()
{  // 2 points
	m_markasi = "";
	m_modeli = "";
	m_stok = 0;

	ozelik = new int[2];
	ozelik[0] = 0;
	ozelik[1] = 0;
}

Taksi::~Taksi()
{   // 1 points
	//dtor
	delete[] ozelik;
}

void Taksi::yaz(){ //1
	cout << "markasi : " << m_markasi << endl << "Modeli : " << m_modeli << endl << "Stok Adedi : " << m_stok << endl;
	cout << "Yolcu Sayisi : " << ozelik[0] << endl << "Bagaj hacmi : " << ozelik[1] << endl << endl;
}

void Taksi::operator=(Taksi digeri) {
	memcpy(ozelik, digeri.ozelik, sizeof(ozelik));
	m_markasi = digeri.m_markasi;
	m_modeli = digeri.m_modeli;
	m_bulunduguDepo = digeri.m_bulunduguDepo;
}


using namespace std;

void stokYaz(Araba *araba){ //3 points

	araba->yaz();
}

int stokHesapla(Araba **a, int toplamAracTipi){ // 3 points
	int indis, araToplam = 0;

	for (indis = 0; indis < toplamAracTipi; indis++){
		araToplam += a[indis]->m_stok;
	}

	return araToplam;
}

void DepoDegistir(Araba& araba1, Araba& araba2){
	depolar tempDepo;

	tempDepo = araba1.m_bulunduguDepo;
	araba1.m_bulunduguDepo = araba2.m_bulunduguDepo;
	araba2.m_bulunduguDepo = tempDepo;

}



int main()
{

	Araba * araba[5]; //4

	araba[0] = new Taksi(10, depo1, 5, 140, "opel", "astra");
	araba[1] = new Taksi(10, depo2, 5, 120, "fiat", "panda");
	araba[2] = new Taksi(10, depo3, 5, 240, "nissan", "qashqai");
	araba[3] = new Kamyon(10, depo4, 10, 4000, "Mercedes", "Atoz");
	araba[4] = new Kamyon(10, depo5, 10, 4000, "Iveco", "M-50");

	for (int i = 0; i < 5; i++) //3 points
		stokYaz(araba[i]);

	int toplamStok = stokHesapla(araba, 5);

	DepoDegistir(*araba[0], *araba[1]);

	cout << "Toplam Stok = " << toplamStok << endl;

	delete araba[0]; // 2 points


	return 0;
}