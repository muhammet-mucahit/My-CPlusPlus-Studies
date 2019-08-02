#include<iostream>
#include<string>
#include<stdio.h>
#include<time.h>
using namespace std;

int main()
{
	clock_t x;
	string isim;
	
	x= clock();
	//cout<<CLOCKS_PER_SEC; //1000
	
	cout<<"Adiniz : ";
	cin>>isim;
	
	//sure geciriyoruz <>
	
	for(int i=0;i<1000;i++)
	{
		cout<<"hey! ";
	}
	
	cout<<endl<<"Gecen sure : "<<(clock()-x)/(double)CLOCKS_PER_SEC;
	   

}
