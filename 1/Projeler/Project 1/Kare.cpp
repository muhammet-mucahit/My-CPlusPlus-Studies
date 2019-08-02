#include<iostream>
using namespace std;


struct Kare
{
	//public:
	Kare(int x)
	{
		kenar=x;
		alan=kenar*kenar;
		cevre=4*kenar;
		
		cout<<"Constructor cagrildi ! Kenar = "<<kenar<<endl;
	}
	
	void goruntule()
	{
		cout<<"Kenar = "<<kenar<<" Alan = "<<alan<<" Cevre = "<<cevre<<endl;
	}
	
	~Kare()
	{
		cout<<"Destructor cagrildi !\n";
	}
	
	void kenarDegistir(int kenarDegeri)
	{
		kenar=kenarDegeri;
		alan=kenar*kenar;
		cevre=4*kenar;
		
	}
	
	private:
		int kenar;
		int alan;
		int cevre;
};
