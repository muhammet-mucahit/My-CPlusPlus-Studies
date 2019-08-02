#include <iostream>

using namespace std;

int main()
{
	int *p, *q, i;
	p = new int[5]; p[0] = 5;
	for(i = 1; i<5 ;i++)
	p[i] = p[i - 1] + 3 * i;
	for(i = 0; i < 5; i++)
	cout << p[i] << " ";
	cout << endl;
	
	
	q = new int[5];
	for(i = 0; i<5 ;i++)
	q[i] = p[4 - i];
	for(i = 0; i < 5; i++)
	cout << q[i] << " ";
	cout << endl;
	
	i = 37;
	p = &i;
	cout <<"p =" << *p << ", i = " << i << endl;
	*p = 68;
	cout << "p = " << &p << ", p = " << p << endl;
	cout << "i = " << &i << ", i = " << i << endl;
}
