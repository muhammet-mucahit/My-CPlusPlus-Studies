#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//     4 ISLEM OYUNU 

using namespace std;

int main()
{
	srand(time(NULL));
	
	int x,y,islem,sonuc;
	bool karar=true;
		
	while(karar)
	{
		x=rand()%50;
		y=rand()%50;
		islem=rand()%3;
	
		if(islem==0)
		{
			cout<<x<<" + "<<y<<" = ";
			cin>>sonuc;
			if(x+y==sonuc)
			{
				cout<<"DOGRU!\n";
			}
			else
			{
				cout<<"YANLIS! Cevap = "<<x+y<<endl;
			}
		}
		
		else if(islem==1)
		{
			cout<<x<<" - "<<y<<" = ";
			cin>>sonuc;
			if(x-y==sonuc)
			{
				cout<<"DOGRU!\n";
			}
			else
			{
				cout<<"YANLIS! Dogru Cevap = "<<x-y<<endl;
			}
		}
		
		else if(islem==2)
		{
			cout<<x<<" * "<<y<<" = ";
			cin>>sonuc;
			if(x*y==sonuc)
			{
				cout<<"DOGRU!\n";
			}
			else
			{
				cout<<"YANLIS! Cevap = "<<x*y<<endl;
			}
		}
		
		cout<<"Tamam mi(0) , Devam mi(1) ? ";cin>>karar;
	}
	
	
	
	
	/*
	//cout<<rand()%50+10<<endl;
	if(rand()%2==0)
	{
		int x=-rand(); // Negatif yapma.
	}
	*/
}
