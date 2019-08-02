#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	/*
	int a[10];
	
	for(int i=0;i<10;i++)
	{
		a[i]=i;
	}
	*/
	
	ofstream cikti("sayilar.txt");
	
	for(int i=0;i<10;i++)
	{
		cikti<<a[i]<<endl;
	}
	
	cout<<"Islem Tamam !";
}
