#include<iostream>

using namespace std;

class dikdortgen
{
	private:
		int yukseklik;
		int genislik;
		int alan;
		char ad[10];
		
	public:
		dikdortgen()
		{
			cout<<"................................................"<<endl;
			cout<<"Merhaba parametresiz cagrildim galiba :) "<<endl;
			cout<<"................................................"<<endl;
		}
		
		~dikdortgen()
		{
			cout<<ad<<"Yok edildi."<<endl;
		}
		
		dikdortgen(char p[])
		{
			//strcpy(ad,p);
			cout<<"................................................"<<endl;
			cout<<ad<<"olusturuldu"<<endl;
			cout<<"................................................"<<endl;
		}
		
		dikdortgen(int a)
		{
			cout<<"................................................"<<endl;
			cout<<"Merhaba parametresiz cagrildim galiba :) "<<endl;
			cout<<"................................................"<<endl;
		}
		
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
	
	{
		dikdortgen d1("d1");
		{
			dikdortgen d2("d2");
			{
				dikdortgen d3("d3");
			}
		}
	}
	
	

	
}
