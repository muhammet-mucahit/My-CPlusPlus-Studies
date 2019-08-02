#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"Please input your age : ";
	cin>>age;
	
	if(age<20)
	{
		cout<<"You are pretty young.";
	}
	else if(age==20)
	{
		cout<<"You are old.";
	}
	else
	{
		cout<<"You are really old.";
	}
	
}
