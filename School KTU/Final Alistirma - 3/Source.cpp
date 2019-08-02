#include <iostream>
#include "fifo.h"

using namespace std;

//typedef FIFO<int>FIFOint;

int main(){


	FIFO<int> f1(10);
	FIFO<int> f2(10);
	cout << "Hello world!" << endl;
	int b = 1;
	for (int i = 0; i < 8; i++){
		f1.write(b);
		b++;
	}
	f1.write(b);
	f1.write(++b);
	int d = f1[9];

	f1.read();
	f1.read();
	f1.write(++b);
	f1.write(++b);
	for (int i = 0; i < 10; i++){
		f1.read();
	}

	f2 = f1;
	return 0;

	cout << endl;
}