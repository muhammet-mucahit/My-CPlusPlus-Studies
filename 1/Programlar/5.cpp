#include<iostream>
using namespace std;

int main()
{
	int x,y,toplam,sonuc;
	
	cout<<"X:";cin>>x;
	cout<<"Y:";cin>>y;
	
	toplam=x+y;
	cout<<x;
	cout<<" + ";
	cout<<y;
	cout<<" = ";
	cin>>sonuc;
	
	if(sonuc==toplam)
	{
		cout<<"DOGRU";
	}
	else
	{
		cout<<"YANLIS";
	}

}
