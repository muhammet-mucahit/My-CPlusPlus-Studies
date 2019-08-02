#include<iostream>
#include<string>
using namespace std;

void asalYazdir(int);
void asalSayi(int);

int main()
{
	//asalYazdir(100);
	asalSayi(1000);
}

void asalSayi(int number)
{
	bool asal(int);
	int i=0;
	
	for(i=0;i<10000;i++)
	{
		if(asal(i) && number>0)
		{
			cout<<i<<endl;
			number--;
		}
	}
}

void asalYazdir(int sayi)
{
	bool asal(int);
	
	int i,c=1;
	for(i=0;i<sayi;i++)
	{
		if(asal(i))
		{
			cout<<c<<" = "<<i<<endl;
			c++;
		}
	}
	
} 

bool asal(int a)
{
	if(a==0 || a==1)
	{
		return false;
	}
	int i,c=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}
	return true;
}
