#include <iostream>
#include "base.h"

using namespace std;

void Base::Data(){

	cout << "Satir sayisini giriniz : "; cin >> satir;
	cout << "Sutun sayisini giriniz : "; cin >> sutun;

	matris = new int*[satir];

	for (int i = 0; i < satir; i++)
		matris[i] = new int[sutun];

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){

			cout << "Matris[" << i << "][" << j << "] = "; cin >> matris[i][j];
		}
	}

}

int Base::Kosegen_Toplami(){

	int toplam = 0;

	if (satir == sutun){

		for (int i = 0; i < satir; i++){
			for (int j = 0; j < sutun; j++){

				if (i = j)
					toplam += matris[i][j];
			}
		}

		return toplam;
	}

	else{
		cout << "Matris kare matris olmadigi icin kosegeni yoktur. " << endl;
		return toplam;
	}
		
	
}

int Base::Max(){
	
	int max = 0;

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){

			if (matris[i][j] > max) max = matris[i][j];
		}
	}

	return max;
}

int Base::Size(){

	return (satir * sutun);
}

void Base::print(){

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){

			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
}

Base::~Base(){
	
	for (int i = 0; i < satir; i++)
		delete[] matris[i];
	
	delete[] matris;
}