#include <iostream>
#include <string>
using namespace std;

class vatandas
{
    string ad, soyad;
    int yas;
protected:
    int kimlikNo;
public:
    void print() const;
    void setle(string, string, int, int);
    void setleKimlikNo(int);
    vatandas(string, string, int, int);
    vatandas();
};

vatandas::vatandas()
{
    ad="";
    soyad="";
    yas=0;
}

vatandas::vatandas(string a, string b, int c, int d)
{
    ad=a;
    soyad=b;
    yas=c;
    kimlikNo=d;
}

void vatandas::print() const
{
    cout<<"Adı: "<<ad<<endl;
    cout<<"Soyadı: "<<soyad<<endl;
    cout<<"Yaşı: "<<yas<<endl;
    cout<<"TC Kimlik No: "<<kimlikNo<<endl;
}

void vatandas::setle(string a, string b, int c, int d)
{
    ad=a;
    soyad=b;
    yas=c;
    kimlikNo=d;
}

void vatandas::setleKimlikNo(int a)
{
    kimlikNo=a;
}

class ogr : public vatandas
{
    string universite;
    double not_ort;
public:
    void print() const;
    void setle(string, string, int, int, string, double);
    ogr(string, string, int, int, string="KTÜ", double=2.00);
    ogr();
};

ogr::ogr()
{
    universite="KTÜ";
    not_ort=2.0;
}

ogr::ogr(string a, string b, int c, int d, string e, double f) : vatandas(a, b, c, d)
{
    universite=e;
    not_ort=f;
}

void ogr::print() const
{
    vatandas::print();
//    cout<<ad;
    cout<<"Üniversitesi: "<<universite<<endl;
    cout<<"Not ortalaması: "<<not_ort<<endl;
}

void ogr::setle(string a, string b, int c, int d, string e, double f)
{
    vatandas::setle(a, b, c, d);
    kimlikNo=d;
    universite=e;
    not_ort=f;
}

class bolum
{
    int yuzolcum;
    string ad;
    ogr degerlerimiz[3];
    vatandas hocalar[2];
public:
    void print() const;
    void setle(string, int, ogr [], vatandas []);
    bolum();
    bolum(string, int, ogr [], vatandas []);
};

void bolum::print() const
{
    cout<<"Bölümün adı: "<<ad<<endl;
    cout<<"Bölümün yüzölçüsü"<<yuzolcum<<endl;
    cout<<"Öğrenci listemiz"<<endl;
    for(int i=0; i<3; i++)
        degerlerimiz[i].print();
    cout<<"Hocalar"<<endl;
    for(int i=0; i<2; i++)
        hocalar[i].print();
}

void bolum::setle(string a, int b, ogr c[], vatandas d[])
{
    ad=a;
    yuzolcum=b;
    for(int i=0; i<3; i++)
        degerlerimiz[i]=c[i];
    for(int i=0; i<2; i++)
        hocalar[i]=d[i];
}

bolum::bolum()
{
    ad="";
    yuzolcum=1000;
}

bolum::bolum(string a, int b, ogr c[], vatandas d[])
{
    ad=a;
    yuzolcum=b;
    for(int i=0; i<3; i++)
        degerlerimiz[i]=c[i];
    for(int i=0; i<2; i++)
        hocalar[i]=d[i];
}
/************************************/
int main()
{
    vatandas hocalar[2];
    hocalar[0].setle("ahmet", "mehmet", 40, 3);
    hocalar[1].setle("ali", "veli", 50, 5);

    ogr ogrenciler[3];
    ogrenciler[0].setle("hasan", "huseyin", 20, 91, "KTÜ", 2.5);
    ogrenciler[1].setle("dursun", "temel", 21, 92, "KTÜ", 3.99);
    ogrenciler[2].setle("ayşe", "fatma", 19, 93, "KTÜ", 3.50);

    bolum bizimBolum("Bilgisayar Müh.", 10000, ogrenciler, hocalar);
    bizimBolum.print();
    return 0;
}

