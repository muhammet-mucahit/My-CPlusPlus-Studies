#include<iostream>
#include<string>
using namespace std;

int main()
{
	int bilinmeyen=79;
	int sayi;
	
	cout<<"Bir sayi giriniz : ";cin>>sayi;
	
	while(bilinmeyen!=sayi)
	{
		if(sayi==bilinmeyen)
		{
			cout<<"Bildiniz!";
		}
		else if(sayi>bilinmeyen)
		{	
			cout<<"Asagi";
			cout<<"Bilemediniz!\n";
			cout<<"Bir sayi giriniz : ";cin>>sayi;
		}
		else if(sayi<bilinmeyen)
		{
			cout<<"Yukari";
			cout<<"Bilemediniz!\n";
			cout<<"Bir sayi giriniz : ";cin>>sayi;
		}
	}
	cout<<"Tebrikler bildiniz.";
}
