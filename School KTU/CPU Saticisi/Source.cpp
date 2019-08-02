#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Sirket{
protected:
	string sirketAdi;
private:
	int kurulusTarihi;
	string merkezUssu;
	string CeoAdi;
public:
	Sirket();												//Constructor
	Sirket(string, int, string, string);					//Parametreli Constructor
	void setSirket(string, int, string, string);			//Set'leme fonksiyonu
	void print() const;										//Yazdirma fonksiyonu
	void printSirketAdi() const;							//Sirket adi geri dondurme fonksiyonu
	string getSirketAdi() const;
};

/*Constructor*/
Sirket::Sirket()
{
	sirketAdi = "MUCOSOFT";
	kurulusTarihi = 1996;
	merkezUssu = "HOUSTON";
	CeoAdi = "MJAY";
}

/*Parametreli constructor*/
Sirket::Sirket(string sAdi, int kTarihi, string mUssu, string cAdi)
{
	sirketAdi = sAdi;
	kurulusTarihi = kTarihi;
	merkezUssu = mUssu;
	CeoAdi = cAdi;
}

/*Setleme fonksyionu*/
void Sirket::setSirket(string sAdi, int kTarihi, string mUssu, string cAdi)
{
	sirketAdi = sAdi;
	kurulusTarihi = kTarihi;
	merkezUssu = mUssu;
	CeoAdi = cAdi;
}

/*Yazdirma fonksiyonu*/
void Sirket::print() const
{
	cout << "Sirket adi : " << sirketAdi << endl;
	cout << "Kurulus tarihi : " << kurulusTarihi << endl;
	cout << "Merkez ussu : " << merkezUssu << endl;
	cout << "Ceo adi : " << CeoAdi << endl;
}

/*Sadece sirket adi yazdiran fonksiyon*/
void Sirket::printSirketAdi() const
{
	cout << sirketAdi << endl;
}

string Sirket::getSirketAdi() const
{
	return sirketAdi;
}

class Uretici : public Sirket{
private:
	bool sahipMiIso9001;
	bool sahipMiTSE;
public:
	Uretici();																						//Constructor
	Uretici(bool iso9001, bool tse, string sAdi, int kTarihi, string mUssu, string cAdi);				//Parametreli constructor
	void setUretici(bool iso9001, bool tse, string sAdi, int kTarihi, string mUssu, string cAdi);		//Setleme fonksiyonu
	void print() const;
};

Uretici::Uretici()
{
	sahipMiIso9001 = false;
	sahipMiTSE = false;
}

Uretici::Uretici(bool iso9001, bool tse, string sAdi, int kTarihi, string mUssu, string cAdi)
:Sirket(sAdi, kTarihi, mUssu, cAdi)
{
	sahipMiIso9001 = iso9001;
	sahipMiTSE = tse;
}

void Uretici::setUretici(bool iso9001, bool tse, string sAdi, int kTarihi, string mUssu, string cAdi)
{
	setSirket(sAdi, kTarihi, mUssu, cAdi);
	sahipMiIso9001 = iso9001;
	sahipMiTSE = tse;
}

void Uretici::print() const
{
	Sirket::print();
	cout << "Sahip mi Iso9001 : " << sahipMiIso9001 << endl;
	cout << "Sahip mi TSE : " << sahipMiTSE << endl;
}


class CPU{
public:
	string cpuAdi;
	double saatHizi;
	int cacheBellek;
	int stokAdet;
	double birimFiyati;
	Uretici uretici;   //Uretici class'inin bir nesnesi olsuuturldu.
public:
	CPU();														//Constructor
	CPU(string, double, int, int, double, Uretici);					//Parametreli Constructor
	void setCPU(string, double, int, int, double, Uretici);			//setleme fonksiyonu
	void stokGuncelle(CPU*, int); 	   							//Stok guncelleme fonksiyonu
	void print() const;											//Yazdirma fonksiyonu

};

CPU::CPU()
{
	cpuAdi = "";
	saatHizi = 0;
	cacheBellek = 0;
	stokAdet = 0;
}

CPU::CPU(string cpuName, double clockRate, int cacheMemory, int stok, double birimFiyat, Uretici ureticiFirma)
{
	cpuAdi = cpuName;
	saatHizi = clockRate;
	cacheBellek = cacheMemory;
	stokAdet = stok;
	birimFiyati = birimFiyat;
	uretici = ureticiFirma;
}

void CPU::setCPU(string cpuName, double clockRate, int cacheMemory, int stok, double birimFiyat, Uretici ureticiFirma)
{
	cpuAdi = cpuName;
	saatHizi = clockRate;
	cacheBellek = cacheMemory;
	stokAdet = stok;
	birimFiyati = birimFiyat;
	uretici = ureticiFirma;
}

void CPU::print() const
{
	cout << "Cpu adi : " << cpuAdi << endl;
	cout << "Saat hizi : " << saatHizi << endl;
	cout << "Cache bellek : " << cacheBellek << endl;
	cout << "Stokdaki adeti : " << stokAdet << endl;
	cout << "Birim fiyati : " << birimFiyati << " TL" << endl;
	cout << "Uretici sirket adi : ";
	uretici.printSirketAdi();
	cout << endl;
}

/*Butun cpu larin guncellenmis halini dosyaya tekrar yazma fonksiyonu*/
void CPU::stokGuncelle(CPU *cpuDizisi, int boyut)
{
	ofstream fileUpdate("cpular.txt", ios::out);

	int i = 0;
	while (i<boyut)
	{
		if (i + 1 == boyut) //son eleman ise sonuna \n eklemesin yoksa hatali calisir
		{
			string sirketAdi = cpuDizisi[i].uretici.getSirketAdi();
			fileUpdate << cpuDizisi[i].cpuAdi << " " << cpuDizisi[i].saatHizi << " " << cpuDizisi[i].cacheBellek << " " << cpuDizisi[i].stokAdet << " " << cpuDizisi[i].birimFiyati << " " << sirketAdi;

		}
		else
		{
			string sirketAdi = cpuDizisi[i].uretici.getSirketAdi();
			fileUpdate << cpuDizisi[i].cpuAdi << " " << cpuDizisi[i].saatHizi << " " << cpuDizisi[i].cacheBellek << " " << cpuDizisi[i].stokAdet << " " << cpuDizisi[i].birimFiyati << " " << sirketAdi << endl;
		}
		i++;
	}

	fileUpdate.close();

}



class Kasa{
private:
	double toplamPara;
	int satisSayisi;
public:
	Kasa();
	Kasa(double, int);
	void guncelle(double, int);
	void print() const;
};

Kasa::Kasa()
{
	toplamPara = 0;
	satisSayisi = 0;
}

Kasa::Kasa(double toplamP, int satisS)
{
	toplamPara = toplamP;
	satisSayisi = satisS;
}

void Kasa::guncelle(double gelenPara, int satisAdeti)
{
	toplamPara += gelenPara;
	satisSayisi += satisAdeti;
}

void Kasa::print() const
{
	cout << "Kasadaki Toplam Para : " << toplamPara << " TL" << endl;
	cout << "Toplam urun satisi : " << satisSayisi << " adet" << endl;
}

/*Bagimsiz fonksiyonlar*/

/*Isim ile arama fonksiyonu*/
void isimIleAra(CPU *cpuDizisi, int boyut)
{
	string isim;
	cout << "Aramak istediginiz CPU nun ismini giriniz : ";
	cin >> isim;

	int i = 0;
	while (i<boyut)
	{
		if (cpuDizisi[i].cpuAdi == isim)
		{
			cpuDizisi[i].print();
		}
		i++;
	}
}

/*Saat hizina gore arama fonksiyonu*/
void saatHiziIleAra(CPU *cpuDizisi, int boyut)
{
	double hiz;
	cout << "Aramak istediginiz CPU nun / CPU larin saat hizini giriniz : ";
	cin >> hiz;

	int i = 0;
	while (i<boyut)
	{
		if (cpuDizisi[i].saatHizi == hiz)
		{
			cpuDizisi[i].print();
		}
		i++;
	}

}

/*Cache bellege gore arama fonksiyonu*/
void cacheBellekIleAra(CPU *cpuDizisi, int boyut)
{
	int cacheBellek;
	cout << "Aramak istediginiz CPU nun / CPU larin cache bellek boyutunu giriniz : ";
	cin >> cacheBellek;

	int i = 0;
	while (i<boyut)
	{
		if (cpuDizisi[i].cacheBellek == cacheBellek)
		{
			cpuDizisi[i].print();
		}
		i++;
	}
}

/*Tumunu listeleme fonksiyonu*/
void tumunuListele(CPU *cpuDizisi, int boyut)
{
	int i = 0;
	while (i<boyut)
	{
		cpuDizisi[i].print();
		i++;
	}
}

/*Sadece stoktakileri listeleme fonksiyonu*/
void sadeceStoktakileriListele(CPU *cpuDizisi, int boyut)
{
	int i = 0;
	while (i<boyut)
	{
		if (cpuDizisi[i].stokAdet > 0)
		{
			cpuDizisi[i].print();
		}
		i++;
	}
}


/*Arama yapma fonksiyonu*/
void aramaYapma(CPU *cpuDizisi, int boyut, double &bakiyemiz)
{
	int secim = 0;

	while (secim != 6)
	{
		cout << endl;
		cout << "-----------------------------------------" << endl;
		cout << "Bakiyeniz : " << bakiyemiz << " TL" << endl;
		cout << "1-Kelime ile arama" << endl;
		cout << "2-Saat hizina gore arama" << endl;
		cout << "3-Cache bellege gore arama" << endl;
		cout << "4-Tumunu listele" << endl;
		cout << "5-Sadece Stokta olanlari listele" << endl;
		cout << "6-Cikis" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;

		cout << "Arama Menusu Seciminiz : ";
		cin >> secim;

		if (secim == 1) isimIleAra(cpuDizisi, boyut);
		if (secim == 2) saatHiziIleAra(cpuDizisi, boyut);
		if (secim == 3) cacheBellekIleAra(cpuDizisi, boyut);
		if (secim == 4) tumunuListele(cpuDizisi, boyut);
		if (secim == 5) sadeceStoktakileriListele(cpuDizisi, boyut);
		if (secim == 6) return;//system("EXIT");
	}

}

/*Satin alma fonksiyonu*/
void satilAl(CPU *cpuDizisi, int boyut, Kasa *kasa, double &bakiyemiz)
{
	string cpuAdi;
	cout << "Satin almak istediginiz CPU nun adini giriniz : ";
	cin >> cpuAdi;

	int adet;

	int i = 0;
	while (i<boyut)
	{
		if (cpuDizisi[i].cpuAdi == cpuAdi)
		{
			cpuDizisi[i].print();
			cout << endl << "Kac adet satin almak istersiniz : ";
			cin >> adet;
			if (adet>0)
			{
				if (bakiyemiz>cpuDizisi[i].birimFiyati * adet)
				{
					if (adet <= cpuDizisi[i].stokAdet)
					{
						bakiyemiz = bakiyemiz - cpuDizisi[i].birimFiyati * adet;
						cpuDizisi[i].stokAdet -= adet;
						kasa->guncelle(cpuDizisi[i].birimFiyati * adet, adet);
						cpuDizisi[i].stokGuncelle(cpuDizisi, boyut);
						cout << cpuAdi << " CPU sundan " << adet << " tane satin aldiniz" << endl;
						cout << "Guncel bakiyeniz = " << bakiyemiz << " TL" << endl;
					}
					else
					{
						cout << "Stokta yeteri sayida CPU yok" << endl;
					}

				}
				else
				{
					cout << "Bakiyeniz yetersiz" << endl;
				}
			}
		}
		i++;
	}

}

/*Stoklara urun ekleme fonksyionu*/
void stokEkle(CPU *cpuDizisi, int boyut)
{
	string cpuAdi;
	cout << "Stok eklemek istediginiz cpu'nun adini giriniz : ";
	cin >> cpuAdi;

	int i = 0;
	while (i<boyut)
	{
		if (cpuDizisi[i].cpuAdi == cpuAdi)
		{
			cout << endl;
			int adet;
			cout << "Kac adet eklemek istersiniz : ";
			cin >> adet;
			cpuDizisi[i].stokAdet += adet;
			cpuDizisi[i].stokGuncelle(cpuDizisi, boyut);
			return;
		}
		i++;
	}

	cout << endl << "Boyle bir cpu bulunamadi." << endl;


}

/*Admin girisi fonksiyonu*/
void adminGirisi(Kasa *kasa, CPU *cpuDizisi, int boyut, Uretici *ureticiDizisi)
{
	string username, password;
	//system("cls");
	cout << "||||||||||||||||| Admin Login |||||||||||||||||" << endl;
	cout << "Username Admin : ";
	cin >> username;
	cout << "Password Admin : ";
	cin >> password;
	cout << "||||||||||||||||||||||||||||||||||" << endl;

	if ((username != "admin") || (password != "admin"))
	{
		cout << "||||||||||||||||||||||||||||||||||" << endl;
		cout << "ACCESS DENIED" << endl;
		cout << "||||||||||||||||||||||||||||||||||" << endl;
		//system("cls");
		//system("exit");
		return;
	}
	else
	{
		cout << "||||||||||||||||||||||||||||||||||" << endl;
		cout << "ACCESS GRANTED" << endl;
		cout << "||||||||||||||||||||||||||||||||||" << endl;
		//system("cls");
		int secim;
		while (secim != 9)
		{
			cout << "||||||||||||||||||||||||||||||||||" << endl;
			cout << "1-Stok ekleme" << endl;
			cout << "2-Kasayi listele" << endl;
			cout << "3-Urunleri listele" << endl;
			cout << "9-Cikis" << endl;
			cout << "||||||||||||||||||||||||||||||||||" << endl;

			cout << "Admin menusu secimini : ";
			cin >> secim;

			if (secim == 1)  stokEkle(cpuDizisi, boyut);
			if (secim == 2)	kasa->print();
			if (secim == 3)  tumunuListele(cpuDizisi, boyut);
			if (secim == 9) {
				//system("cls");
				//system("exit");
				return;
			}

		}
	}

}

/*Bakiye ekleme / guncelleme fonksiyonu*/
void bakiyeEkle(double &bakiyemiz)
{
	double eklenecekBakiye;
	cout << "Eklemek istediginiz bakiye miktarini giriniz : ";
	cin >> eklenecekBakiye;
	bakiyemiz += eklenecekBakiye;
}

int main()
{
	/*----------Dosyadan veri okuma ve yukleme asamalari------------*/

	ifstream file;
	file.open("ureticiler.txt");

	int ureticiSayisi = 0;
	char ch;
	while (!file.eof())
	{
		file.get(ch);
		if (ch == '\n') ureticiSayisi++;
	}
	ureticiSayisi++;
	file.close();


	Uretici *ureticilerDizisi = new Uretici[ureticiSayisi]; //Dinamik dizi olusturuluyor.
	Uretici *ureticiHeaderPointer = ureticilerDizisi;

	ifstream file2;
	file2.open("ureticiler.txt");
	/*Degiskenler tanimlaniyor.*/
	string sirketAdi = "";
	int kurulusTarihi = 0;
	string merkezUssu = "";
	string CeoAdi = "";
	bool sahipMiIso9001 = false;
	bool sahipMiTSE = false;

	while (!file2.eof())
	{

		file2 >> sirketAdi >> kurulusTarihi >> merkezUssu >> CeoAdi >> sahipMiIso9001 >> sahipMiTSE;
		ureticilerDizisi->setUretici(sahipMiIso9001, sahipMiTSE, sirketAdi, kurulusTarihi, merkezUssu, CeoAdi);  //Uretici degerleri setleniyor
		ureticilerDizisi++;																						//Bir sonraki diziye geciliyor

	}

	file2.close();


	ifstream cpuAdetOku;
	cpuAdetOku.open("cpular.txt");

	int cpuAdet = 0;
	char cr;
	while (!cpuAdetOku.eof())
	{
		cpuAdetOku.get(cr);
		if (cr == '\n') cpuAdet++;
	}
	cpuAdet++;
	cpuAdetOku.close();

	CPU cpuDizisi[cpuAdet];
	CPU *cpuPointer = cpuDizisi;

	ifstream cpuoku;
	cpuoku.open("cpular.txt");

	string cpuAdi;
	double saatHizi;
	int cacheBellek;
	int stokAdet;
	double birimFiyati;
	string ureticiAdi;

	while (!cpuoku.eof())
	{
		cpuoku >> cpuAdi >> saatHizi >> cacheBellek >> stokAdet >> birimFiyati >> ureticiAdi;
		if (ureticiAdi == "intel")
		{
			cpuPointer->setCPU(cpuAdi, saatHizi, cacheBellek, stokAdet, birimFiyati, *ureticiHeaderPointer);
			cpuPointer++;
		}
		else if (ureticiAdi == "amd")
		{
			cpuPointer->setCPU(cpuAdi, saatHizi, cacheBellek, stokAdet, birimFiyati, ureticiHeaderPointer[1]);
			cpuPointer++;
		}
	}
	cpuoku.close();

	/* -------------- Program asamasi --------------*/

	Kasa paraKasasi;

	double bakiye;
	cout << "Bakiyenizi giriniz : ";
	cin >> bakiye;

	int secim;
	while (secim != 9)
	{
		cout << endl;
		cout << "-----------------------------------------" << endl;
		cout << "Bakiyeniz : " << bakiye << " TL" << endl;
		cout << "1-CPU Arama" << endl;
		cout << "2-CPU Satin alma" << endl;
		cout << "3-Bakiye ekleme" << endl;
		cout << "8-Admin girisi" << endl;
		cout << "9-Cikis" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;

		cout << "Ana Menu Seciminiz : ";
		cin >> secim;

		if (secim == 1)	aramaYapma(cpuDizisi, cpuAdet, bakiye);
		if (secim == 2)  satilAl(cpuDizisi, cpuAdet, &paraKasasi, bakiye);
		if (secim == 3)  bakiyeEkle(bakiye);
		if (secim == 8)  adminGirisi(&paraKasasi, cpuDizisi, cpuAdet, ureticiHeaderPointer);
		if (secim == 9)  return 0;//system("EXIT");

	}



	return 0;

}