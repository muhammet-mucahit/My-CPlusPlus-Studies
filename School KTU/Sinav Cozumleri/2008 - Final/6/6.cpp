#include <iostream>

using namespace std;

int main(){
	
	
	int A[5] = {0}, *p, *q, i;
	
	for(int j = 0; j<5; j++)
	A[j] += 3 * j;
	
	p=A;
	
	for(i = 0; i<5; i++)
	cout << A[i] << " ";
	cout <<endl;
	
	q = new int[5];
	for(i = 0; i < 5; i++)
	p[i] += A[4-i];
	
	for(i = 0; i < 5; i++)
	cout << p[i] << " ";
	cout << endl;
	
	for(i = 0; i < 5; i++){
		
		*(q + i) = A[i];
		cout << "q = " << q[i] << endl;	
	}
	
	*p = 68;
	
	cout << "&p = " << &p << ", p = " << p << ", *p = " << *p;
}
