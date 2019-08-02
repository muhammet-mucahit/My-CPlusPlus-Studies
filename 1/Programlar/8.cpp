#include<iostream>
using namespace std;

int main()
{
	/*
	cout<<"Mer\"haba";
	cout<<"\n";
	cout<<"Mer\ahaba";
	cout<<"\n";
	cout<<"Mer\\haba";
	
	
	cout<<"Isim : \tMucahit";
	*/
	
	int birinci,ikinci,cevap,islem;
	
	cout<<"Birinci Sayiyi Giriniz :";
	cin>>birinci;
	cout<<"Ikinci Sayiyi Giriniz :";
	cin>>ikinci;
	
	cout<<"0 toplama\n1 bolme\n2 carpma\n3 cikarma";
	cin>>islem;
	
	if(islem==0)
	{
		cout<<birinci<<"+"<<ikinci<<"="<<birinci+ikinci<<endl;
	}
	else if(islem==1)
	{
		cout<<birinci<<"/"<<ikinci<<"="<<birinci/ikinci<<endl;
	}
	else if(islem==2)
	{
		cout<<birinci<<"*"<<ikinci<<"="<<birinci*ikinci<<endl;
	}
	else if(islem==3)
	{
		cout<<birinci<<"-"<<ikinci<<"="<<birinci-ikinci<<endl;
	}
	else
	{
		cout<<"Yanlis bir deger girdiniz ! ! !";
	}
	/*
	if(ikinci==0)
	{
		cout<<"Sifirla bolemez!!!";
	}
	else
	{
		cout<<birinci<<"+"<<ikinci<<"="<<birinci+ikinci<<endl;
		cout<<birinci<<"-"<<ikinci<<"="<<birinci-ikinci<<endl;
		cout<<birinci<<"*"<<ikinci<<"="<<birinci*ikinci<<endl;
		cout<<birinci<<"/"<<ikinci<<"="<<birinci/ikinci<<endl;
		cout<<birinci<<"%"<<ikinci<<"="<<birinci%ikinci<<endl;
	}
	*/
	
}
