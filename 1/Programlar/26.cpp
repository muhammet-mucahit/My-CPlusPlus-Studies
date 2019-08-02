#include<iostream>
#include<string>
using namespace std;

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
	
	bool buldum=false;
	int aranan=5;
	
	for(int i=0;i<10;i++)
	{
		if(aranan==array[i])
		{
			buldum=true;
			cout<<"Buldum, index = "<<i<<endl;break;
		}
	}
	if(buldum)
	{
		cout<<"Tamamdir.";
	}
	else
	{
		cout<<"Olmadi.";
	}
	
}


