#include<iostream>
using namespace std;

int main()
{
	int x,y;
	bool karsilastir;
	/*
	cout<<"X degeri giriniz :";
	cin>>x;
	cout<<"Merhaba "<< x <<" Hosgeldiniz";
	*/
	
	cout<<"X ve Y giriniz :\n";
	cin>>x>>y;
	
	karsilastir=(x==y);
	cout<<"Karsilastir = "<<karsilastir<<"\n";
	
	if(karsilastir)
	{
		cout<<"DOGRU";
	}
	else
	{
		cout<<"YANLIS";
	}
}
