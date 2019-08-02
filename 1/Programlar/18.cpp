#include<iostream>
#include<string>
using namespace std;

void arttir(int &);
void eksilt(int *);
int carp(int);

int main()
{
	int sayi=1;
	
	//cout<<"Sayi = "<<sayi<<endl;
	//arttir(sayi);
	//cout<<"Arttirdan sonra Sayi = "<<sayi<<endl;
	
	//cout<<"Sayi = "<<sayi<<endl;
	//eksilt(&sayi);
	//cout<<"Eksiltten sonra Sayi = "<<sayi<<endl;
	
	cout<<"Sayi = "<<sayi<<endl;
	sayi=carp(sayi);
	cout<<"Carptan sonra Sayi = "<<sayi<<endl;
	
}

int carp(int a)
{
	cout<<"Carpin icinde a = "<<a<<endl;
	a=a*2;
	cout<<"Islemden sonra Carpin icinde a = "<<a<<endl;
	return a;
}

void arttir(int &a)
{
	cout<<"Arttirin icinde a = "<<a<<endl;
	a+=1;
	cout<<"Islemden sonra Arttirin icinde a = "<<a<<endl;
}


void eksilt(int *a)
{
	cout<<"Eksiltin icinde a = "<<*a<<endl;
	*a-=1;
	cout<<"Islemden sonra Eksiltin icinde a = "<<*a<<endl;
}
