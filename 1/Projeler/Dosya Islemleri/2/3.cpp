#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	int i=0,size;
	
	ifstream girdi("sayilar.txt");
	girdi>>size;
	
	string a[size];
	
	while(girdi)
	{
		girdi>>a[i];
		i++;
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
		
		
	cout<<"\n\nIslem Tamam !";
}
