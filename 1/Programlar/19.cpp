#include<iostream>
#include<string>
using namespace std;

//Pointerla da yapilabilir ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !

void arttir(int [],int);

int main()
{
	int array[10];
	
	for(int i=0;i<10;i++)
	{
		array[i]=i;
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<array[i]<<" - ";
	}
	
	arttir(array,10);
	
	cout<<"\n\nIslemden Sonra : "<<endl;
	
	for(int i=0;i<10;i++)
	{
		cout<<array[i]<<" - ";
	}
	
	cout<<"\n\nArray = "<<array<<endl;
	cout<<"*Array = "<<*array<<endl;
	cout<<"(Array+1) = "<<(array+1)<<endl;
	cout<<"*(Array+1) = "<<*(array+1)<<endl;
}

void arttir(int a[],int boyut)
{
	for(int i=0;i<boyut;i++)
	{
		a[i]=a[i]+1;
	}
}
