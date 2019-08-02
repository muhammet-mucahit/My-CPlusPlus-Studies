#include<iostream>
#include<string>
using namespace std;

int main()
{
	int firstValue=5,secondValue=10,x;
	int *p1,*p2;
	
	p1=&firstValue;
	p2=&secondValue;
	
	*p1=10;
	*p2=*p1;
	p1=p2;
	*p1=20;
	
	cout<<"firstvalue is "<<firstValue<<endl;
	cout<<"secondvalue is "<<secondValue<<endl;
	
	cout<<"p1 is "<<p1<<endl;
	cout<<"p2 is "<<p2<<endl;
	
	cout<<"*p1 is "<<*p1<<endl;
	cout<<"*p2 is "<<*p2<<endl;
	
	
}
