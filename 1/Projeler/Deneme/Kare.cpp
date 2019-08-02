#include<iostream>

using namespace std;

struct Kare
{
	public:
		Kare()
		{
			kenar=1;
		}
		Kare(int kenarDegeri)
        {
			kenar=kenarDegeri;
		}
		
		int alanBul()
		{
			return kenar*kenar;
		}
		
		int alanBul(int l,double u)
		{
			return kenar*kenar;
		}
		
		double alanBul(double x,int r)
		{
			return x*x;
		}
		
		int cevreBul()
		{
			return 4*kenar;
		}
		
		int kenarGetir()
		{
			return kenar;
		}
		
		void kenarDegistir(int yeniKenar)
		{
			if(yeniKenar>0)
			{
				kenar=yeniKenar;
			}
			else
			{
				kenar=1;
			}
		}
		
		void kenariYazdir()
		{
			cout<<"Kenar = "<<kenar<<endl;
		}
			
		
		
		private:
			int kenar;
	
};
