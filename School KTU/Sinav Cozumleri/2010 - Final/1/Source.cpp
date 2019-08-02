#include <iostream>

using namespace std;

int SORU();
void Matris_Oku(int **, int&, int&);
void Print_Matris(int **, int, int);
void Matris_Transpoze(int **, int, int);
void Make_KareMatris(int **&, int&, int&);
int Total_Diagonal(int **, int, int);

int main(){

	cout << SORU();

	/*int **p, satir, sutun;

	cout << "Satir giriniz : "; cin >> satir;
	cout << "Sutun giriniz : "; cin >> sutun;

	p = new int*[satir];
	for (int i = 0; i < satir; i++){
		p[i] = new int[sutun];
	}

	Matris_Oku(p, satir, sutun);*/
	

	//Matris_Transpoze(p, satir, sutun);
	//Print_Matris(p, satir, sutun);

	//Make_KareMatris(p, satir, sutun);
	//Print_Matris(p, satir, sutun);

	//cout << endl;
	
	//for (int i = 0; i < satir; i++)
	//	delete[] p[i];
	//delete[] p;

	return 0;
}

int Total_Diagonal(int **matris, int satir, int sutun){

	cout << endl;

	int toplam = 0;

	if (satir == sutun){

		for (int i = 0; i < satir; i++){
			for (int j = 0; j < sutun; j++){
				if (i == j){
					toplam += matris[i][j];
				}
			}
		}
	}

	return toplam;
}

void Make_KareMatris(int **&matris, int &satir, int &sutun){

	int indis;

	if (satir > sutun)
		indis = satir;
	else
		indis = sutun;

	int **temp;

	temp = new int*[indis];
	
	for (int i = 0; i < indis; i++){
		temp[i] = new int[indis];
	}

	for (int i = 0; i < indis; i++){
		for (int j = 0; j < indis; j++){
			temp[i][j] = 0;
		}
	}

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){
			temp[i][j] = matris[i][j];
		}
	}

	satir = indis;
	sutun = indis;
	matris = new int*[satir];

	for (int i = 0; i < satir; i++){
		matris[i] = new int[sutun];
	}

	for (int i = 0; i < indis; i++){
		for (int j = 0; j < indis; j++){
			matris[i][j] = temp[i][j];
		}
	}
}

void Matris_Transpoze(int **matris, int satir, int sutun){

	cout << endl;
	int **temp;

	temp = new int*[satir];
	for (int i = 0; i < satir; i++){
		temp[i] = new int[sutun];
	}

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){
			temp[i][j] = matris[j][i];
		}
	}

	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){
			matris[i][j] = temp[i][j];
		}
	}
}

void Print_Matris(int **matris, int satir, int sutun){
	
	cout << endl;
	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
}

void Matris_Oku(int **matris, int &satir, int &sutun){

	cout << endl;
	for (int i = 0; i < satir; i++){
		for (int j = 0; j < sutun; j++){
			cout << "matris[" << i << "][" << j << "] = "; cin >> matris[i][j];
		}
	}
}

int SORU(){

	int **p, satir, sutun;

	cout << "Satir giriniz : "; cin >> satir;
	cout << "Sutun giriniz : "; cin >> sutun;

	p = new int*[satir];
	for (int i = 0; i < satir; i++){
		p[i] = new int[sutun];
	}

	Matris_Oku(p, satir, sutun);
	Print_Matris(p, satir, sutun);

	if (satir == sutun){
		Matris_Transpoze(p, satir, sutun);
		Print_Matris(p, satir, sutun);
	}
	else{
		Make_KareMatris(p, satir, sutun);
		Matris_Transpoze(p, satir, sutun);
		Print_Matris(p, satir, sutun);
	}

	return (Total_Diagonal(p, satir, sutun));

	for (int i = 0; i < satir; i++)
		delete[] p[i];
	delete[] p;

}
