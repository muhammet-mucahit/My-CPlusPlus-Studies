#include<iostream>
#include<string>
using namespace std;

int factorial(int);
int factorial2(int);

int main()
{
	cout<<factorial(15)<<endl;
	cout<<factorial2(15)<<endl;
}

int factorial2(int number)
{
	if(number==0 || number==1)
	{
		return 1;
	}
	else
	{
		return number * factorial2(number-1);
	}
	
}

int factorial(int number)
{
	int carpim=1;
	for(int i=number;i>=1;i--)
	{
		carpim=carpim*i;
	}
	
	return carpim;
}
