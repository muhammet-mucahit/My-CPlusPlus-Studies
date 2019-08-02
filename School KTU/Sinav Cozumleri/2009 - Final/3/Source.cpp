#include <iostream>

using namespace std;

int* sirala(int *&dizi, int &boyut){

	int temp, count = 1, i = 0, j = 0, *gecici;

	gecici = new int[boyut * 2];

	for (int i = 0; i < boyut; i++){

		for (int j = i + 1; j < boyut; j++){

			if (dizi[i] > dizi[j]){
				temp = dizi[j];
				dizi[j] = dizi[i];
				dizi[i] = temp;
			}
		}
	}

	while (i < boyut){

		if (dizi[i] == dizi[i + 1])
			count++;

		else{

			gecici[j] = dizi[i];
			gecici[j + 1] = count;

			j += 2;
			count = 1;
		}
			
		i++;
	}


	boyut += 1;
	dizi = new int[boyut];

	for (int i = 0; i < boyut; i++){
		dizi[i] = gecici[i];
	}

	delete[] gecici;

	return dizi;

	delete[] dizi;
	
}

int main(){

	int *dizi,size = 9;

	
	dizi = new int[size];

	for (int i = 0; i < size; i++){

		cout << "Dizi[" << i << "] = "; cin >> dizi[i];
	}

	sirala(dizi, size);

	for (int i = 0; i < size; i++){

		cout << dizi[i] << " ";
	}

	delete[] dizi;
}