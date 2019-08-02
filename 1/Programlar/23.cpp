#include<iostream>
#include<string>
using namespace std;

int fibonacci(int);
void fibonacci2(int);
void fibonacci3(int);

int main()
{
	//cout<<fibonacci(10);
	//fibonacci2(20);
	fibonacci3(10);
}

void fibonacci3(int d)
{
	int a=0,b=1,c;
	for(int i=0;i<d-1;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
}

void fibonacci2(int b)
{
	if(b==0)
	{
		return;
	}
	else
	{
		fibonacci2(b-1);
		cout<<fibonacci(b)<<endl;
	}
}

int fibonacci(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(a-1)+fibonacci(a-2);
	}
}
