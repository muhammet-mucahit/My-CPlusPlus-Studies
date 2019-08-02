#include<iostream>
#include<string>
using namespace std;

int main()
{
	int x;
	x=5;
	int *xPtr;
	xPtr=&x;
	
	
	cout<<"x in degeri : "<<x;
	cout<<"\nxPtr in degeri : "<<*xPtr;
	cout<<"\nx in adresi : "<<&x;
	cout<<"\nx in adresi : "<<xPtr;
	
	
	//cout<<"\n\nxPtr in adresi : "<<&xPtr;
}
