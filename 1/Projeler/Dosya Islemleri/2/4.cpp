#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class deneme
{
	int x;
	public:
		deneme()
		{
			x=0;
		}
		
		deneme(int sayi)
		{
			x=sayi;
		}
		
		void operator=(int param)
		{
			x=param;
		}
		
		int yazdir()
		{
			return x;
		}
	
};

int main()
{
	deneme a;
	
	a=123;
	cout<<a.yazdir()<<endl;
}
