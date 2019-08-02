#include <iostream>
#include <fstream>

using namespace std;
enum gunler{ptesi, sali, carsamba, persembe, cuma, ctesi, pazar};

void yazEnum(ofstream & kaynak, gunler a)
{
    switch(static_cast<gunler>(a%7))
    {
    case ptesi: kaynak<<"Ptesi"; break;
    case sali: kaynak<<"Salı"; break;
    case carsamba: kaynak<<"Çarşamba"; break;
    case persembe: kaynak<<"Perşembe"; break;
    case cuma: kaynak<<"Cuma"; break;
    case ctesi: kaynak<<"Ctesi"; break;
    case pazar: kaynak<<"Pazar"; break;
    }

}
int main()
{
    ofstream dosya("ilk.txt", ios::app);
    gunler guncel;
    for(guncel=cuma; guncel<2000; guncel=static_cast<gunler>(guncel+1));
    cout<<guncel<<endl;
    cout<<1996%7;

yazEnum(dosya, guncel);
dosya.close();
    return 0;
}

