#include <iostream>
#include <string>
using namespace std;

class vatandas
{
    string ad, soyad;
    int kimlikNo;
    int yas;
public:
    void print() const;
    void kimlikNoSetle(int);
    void setle(string, string, int, int);
};

class ogr : public vatandas
{
    string universite;
    double not_ort;
public:
    void print() const;
    void setle(string, string, int, int, string, double);
};

void vatandas::setle(string a, string b, int c, int d)
{
    ad=a;
    soyad=b;
    yas=c;
    kimlikNo=d;
}

void vatandas::print() const
{
    cout<<"adı: "<<ad<<endl;
    cout<<"soyadı: "<<soyad<<endl;
    cout<<"yaşı: "<<yas<<endl;
    cout<<"TC Kimlik No: "<<kimlikNo<<endl;
}

void vatandas::kimlikNoSetle(int newID)
{
    kimlikNo=newID;
}

void ogr::print() const
{
    vatandas::print();
    //cout<<ad;
    cout<<"üniversitesi: "<<universite<<endl;
    cout<<"not ortalaması: "<<not_ort<<endl;
}

void ogr::setle(string a, string b, int c, int d, string e, double f)
{
    vatandas::setle(a, b, c, d);
    vatandas::kimlikNoSetle(d);
    universite=e;
    not_ort=f;
}

/************************************/
int main()
{
    vatandas ornek1;
    ogr ornek2;
    ornek1.setle("ahmet", "mehmet", 60, 3);
    ornek1.kimlikNoSetle(96);
    ornek1.print();
    ornek2.setle("hasan", "huseyin", 20, 91, "KTÜ", 2.00);
//    ornek2.setle("hasan", "huseyin", 20, 91);
    ornek2.kimlikNoSetle(100);
    ornek2.print();
    return 0;
}

