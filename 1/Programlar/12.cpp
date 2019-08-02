#include<iostream>
#include<string>
using namespace std;

int main()
{
	/*
	int a,b;
	a=5;
	b=10;
	
	while(a<b)
	{
		cout<<"While in icerisindeyim.\n";
		b--;
		cout<<"B su anda "<<b<<" ye esit\n";
	}
	cout<<"While in disina ciktim";
	*/
	
	int sayi;
	
	cout<<"Bir sayi giriniz : ";cin>>sayi;
	
	while(sayi>0)
	{
		cout<<'*';
		sayi--;
	}
	
	cout<<"\nWhile in disina ciktim.";
}


