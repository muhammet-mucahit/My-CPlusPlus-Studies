#include <iostream>

using namespace std;

template<typename T>
T* ekle(T *&p1, T *&p2, T &boyut1, T &boyut2){

	T *temp;
	int k = 0;
	bool a = true;

	temp = new T[boyut2];

	for (int i = 0; i < boyut2; i++){
		for (int j = 0; j < boyut1; j++){

			if (p2[i] == p1[j]) a = false;

		}

		if (a){
			temp[k] = p2[i];
			k++;
		}
		a = true;
	}

	boyut1 += k;
	int j = 0;

	for (int i = k; i < boyut1; i++){
		temp[i] = p1[j];
		j++;
	}

	p1 = new T[boyut1];

	p1 = temp;

	return p1;

	delete[] p1;
	delete[] temp;

}

int main(){


	int size1 = 4, size2 = 5;

	int *dizi1;
	int *dizi2;

	dizi1 = new int[size1];
	dizi2 = new int[size2];

	for (int i = 0; i < size1; i++){ cout << "Dizi[" << i << "] = "; cin >> dizi1[i]; }
	for (int i = 0; i < size2; i++){ cout << "Dizi[" << i << "] = "; cin >> dizi2[i]; }

	ekle(dizi1, dizi2, size1, size2);

	for (int i = 0; i < size1; i++)
		cout << dizi1[i] << " ";

	cout << endl;

	delete[] dizi1;
	delete[] dizi2;
}