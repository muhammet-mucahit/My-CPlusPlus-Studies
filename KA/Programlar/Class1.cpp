#include<iostream>

using namespace std;

class dikdortgen
{
	private:
		int yukseklik;
		int genislik;
		int alan;
		
	public:
		void veri_gir()
		{
			cout<<"Yukseklik Gir : "; cin>>yukseklik;
			cout<<"Genislik Gir  : "; cin>>genislik;
		}
		
		void alan_bul()
		{
			alan=yukseklik*genislik;
			
			cout<<"Dikdortgenin Alani : "<<alan<<endl;
		}
};

int main()
{
	dikdortgen d1,d2;
	
	d1.veri_gir();
	d1.alan_bul();
	d2.genislik=22;
	d2.yukseklik=32;
	d2.alan_bul();
}
