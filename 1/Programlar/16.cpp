#include<iostream>
#include<string>
using namespace std;

int main()
{
	int secim=1;
	string isim;
	
	cout<<"Isminizi giriniz : ";cin>>isim;
	
	while(secim!=0)
	{
		cout<<"1. Toplama\n2. Cikarma\n3. Carpama\n4. Bolme\n0. Cikis\n\n"<<isim<<" bey lutfen seciminizi giriniz : "; cin>>secim;
		
		if(secim==1)
		{
			int a,b;
			cout<<"Ilk sayiyiyi giriniz : ";cin>>a;
			cout<<"Ikinci sayiyiyi giriniz : ";cin>>b;
			cout<<"a + b = "<<a+b<<endl<<endl;
		}
		else if(secim==2)
		{
			int a,b;
			cout<<"Ilk sayiyiyi giriniz : ";cin>>a;
			cout<<"Ikinci sayiyiyi giriniz : ";cin>>b;
			cout<<"a - b = "<<a-b<<endl<<endl;
		}
		else if(secim==3)
		{
			int a,b;
			cout<<"Ilk sayiyiyi giriniz : ";cin>>a;
			cout<<"Ikinci sayiyiyi giriniz : ";cin>>b;
			cout<<"a * b = "<<a*b<<endl<<endl;
		}
		else if(secim==4)
		{
			int a,b;
			cout<<"Ilk sayiyiyi giriniz : ";cin>>a;
			cout<<"Ikinci sayiyiyi giriniz : ";cin>>b;
			if(b==0)
			{
				cout<<"0 bir sayiyi bolemez !!!\n\n";
			}
			else
			{
				cout<<"a / b = "<<a/b<<endl<<endl;
			}	
		}
		else if(secim!=2 || secim!=1 || secim!=0 || secim!=3 || secim!=4)
		{
			cout<<"Yanlis bir deger girdiniz."<<endl<<endl;
		}
	}
	
}
