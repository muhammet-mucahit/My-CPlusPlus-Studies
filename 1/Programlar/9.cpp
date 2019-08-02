#include<iostream>
using namespace std;

int main()
{
	int birinci,ikinci,cevap,islem;
	
	cout<<"Birinci Sayiyi Giriniz :";
	cin>>birinci;
	cout<<"Ikinci Sayiyi Giriniz :";
	cin>>ikinci;
	
	cout<<"0 toplama\n1 cikarma\n2 carpma\n3 bolme\nBirini Seciniz : ";
	cin>>islem;
	
	switch(islem)
	{
		case 0: cout<<"Sonuc = "<<birinci+ikinci; break;
		case 1: cout<<"Sonuc = "<<birinci-ikinci; break;
		case 2:	cout<<"Sonuc = "<<birinci*ikinci; break;
		case 3:	
		if(ikinci==0)
		{
			cout<<"0 la bolemez.";
		}
		else
		cout<<"Sonuc = "<<birinci/ikinci; break;
		default: cout<<"Yanlis Bir Deger Girdiniz ! ! !";
	}
}
