#include<iostream>
using namespace std;

class CVector
{
	public:
		int x,y;
		CVector() {};
		CVector(int,int);
		CVector operator + (CVector);
		CVector operator + (int);
		void operator << (CVector);
		void operator ++ (int);
};


int main()
{
	CVector a(3,1);
	CVector b(1,2);
	CVector c;
	
	c=a+10;
	c++;
	c<<a;
	cout<<c.x<<" , "<<c.y;
	
}

CVector::CVector(int a,int b)
{
	x=a;
	y=b;
}

CVector CVector::operator +(CVector param)
{
	CVector temp;
	temp.x=x+param.x;
	temp.y=y+param.y;
	
	return (temp);
}

CVector CVector::operator +(int sayi)
{
	CVector gecici;
	gecici.x=x+sayi;
	gecici.y=y+sayi;
	return gecici;
}

void CVector::operator ++(int sayi)
{
	x=x+1;
	y=y+1;
}

void CVector::operator <<(CVector param)
{
	x=param.x;
	y=param.y;
}

