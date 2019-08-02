#include<iostream>
#include<string>
using namespace std;

int ara(int *,int,int);

int main()
{
	int array[10]; 
	
	for(int i=0;i<10;i++)
	{
		array[i]=(i*2)+3;
	}
	
	array[7]=5;
	
	for(int i=0;i<10;i++)
	{
		cout<<array[i]<<" ";
	}
	
	cout<<endl<<endl;
	
	bool tamam=true;
	while(tamam)
	{
		int deg=ara(array,10,5);
		if(deg>0 && deg<10)
		{
			array[deg]=1;
		} 
		if(deg==-1)
		{
			tamam=false;
		}
	}
	
	cout<<"Son hali : \n"; 
	
	for(int i=0;i<10;i++)
	{
		cout<<array[i]<<" ";
	}
}

int ara(int *a,int size,int aranan)
{	
	for(int i=0;i<size;i++)
	{
		if(aranan==a[i])
		{
			cout<<"Buldum, index = "<<i<<endl;
			return i;
		}
	}
	
	cout<<"Bulamadim";
	return -1;
}
