#include <iostream>
#include <string>
using namespace std;

class ogr
{
    int ogr_no;
    string ad;
    double not_ort;
public:
    void yazdir() const;
    void setle(int, string, double);
    bool caliskanMi(const ogr&) const;
};

bool ogr::caliskanMi(const ogr& ogr2) const // & bu olmadan da calisiyor.
{
    return (not_ort>ogr2.not_ort);
}

void ogr::yazdir() const
{
    cout<<"Öğrenci Nosu: "<<ogr_no<<endl;
    cout<<"Öğrencinin Adı: "<<ad<<endl;
    cout<<"Öğrencinin Not Ort.: "<<not_ort<<endl;
}

void ogr::setle(int no, string name, double avg)
{
    ogr_no=no;
    ad=name;
    not_ort=avg;
}

/************************************/
int main()
{
    ogr ogr1, ogr2;
    ogr1.setle(96301, "Zafer YAVUZ", 3.62);
    ogr1.yazdir();
    ogr2.setle(105956, "Ali DOĞAN", 3.60);
    ogr2.yazdir();
    if(ogr1.caliskanMi(ogr2))
        cout<<"İlk öğrenci daha çalışkan"<<endl;
    else
        cout<<"İkinci öğrenci daha çalışkan"<<endl;
    return 0;
}

