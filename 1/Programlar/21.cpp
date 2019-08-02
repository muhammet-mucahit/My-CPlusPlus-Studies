#include<iostream>
#include<string>
using namespace std;

void tersten(int *,int size);

int main()
{
	int array[10];
	for(int i=0;i<10;i++)
	{
		array[i]=i;
	}
	
	tersten(array,10);
	
}

void tersten(int *a,int size)
{
	if(size==0)
	{
		return;
	}
	else
	{
		tersten(a+1,size-1);
		cout<<a[0]<<" ";
	}
	
}
