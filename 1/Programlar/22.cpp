#include<iostream>
#include<string>
using namespace std;

void tersten(char *,int size);

int main()
{
	char *ad="merhaba";
	tersten(ad,7);
}

void tersten(char *a,int size)
{
	if(size==0)
	{
		return;
	}
	else
	{
		tersten(&a[1],size-1);
		cout<<a[0]<<" ";
	}
}
