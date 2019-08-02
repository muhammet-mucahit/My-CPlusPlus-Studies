#include<iostream>

using namespace std;

class CRectangle
{
	int x,y;
	public :
		void set_values(int,int);
		int area()
		{
			return(x*y);
		}
}rect;

void CRectangle::set_values(int a,int b)
{
	x=a;
	y=b;
}

int main()
{
	//CRectangle rect;\
	
	rect.set_values(3,8);
	
	cout<<"Area = "<<rect.area();
}
