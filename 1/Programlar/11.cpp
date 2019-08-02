#include<iostream>
#include<string>
using namespace std;

int buyukOlan(int x,int y);
string isimSoyisim(string isim,string soyisim);

int main()
{
	int a,b;
	string c,d;
	
	cout<<"Lutfen bir sayi giriniz : ";cin>>a;
	cout<<"Lutfen bir sayi giriniz : ";cin>>b;
	
	cout<<buyukOlan(a,b);
	cout<<endl;
	
	cout<<"Ad : ";cin>>c;
	cout<<"Soyad : ";cin>>d;
	
	cout<<isimSoyisim(c,d);
	
}

int buyukOlan(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

string isimSoyisim(string isim,string soyisim)
{
	return isim+soyisim;
}
