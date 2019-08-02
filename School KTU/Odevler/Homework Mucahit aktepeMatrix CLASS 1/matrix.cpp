#include <iostream>
#include <fstream>
#include "matrix.h"
#include "complex.h"

using namespace std;

matris::matris(const matris& otherMatris){ //copy constructor
	satir = otherMatris.satir;
	sutun = otherMatris.sutun;
	list = new kompleks*[satir];
	
	for(int i=0 ; i<satir ; i++) {
		
		list[i] = new kompleks [sutun];
	}
}

matris::matris(int str , int stn) {
	
	satir = str;
	sutun = stn;
	
	list = new kompleks*[satir];
	
	for(int i=0 ; i<satir ; i++) {
		
		list[i] = new kompleks [sutun];
	}
	
}

void matris::oku() {
	
	ifstream oku("Karmasik.txt");
	
	for(int i=0 ; i<satir ; i++) {
		
		for(int j=0; j < sutun; j++) {
			oku  >> list[i][j];
		}			
	}
	
	oku.close();
}

const matris& matris::operator=(const matris& otherMatris) {
	
	satir = otherMatris.satir;
	sutun = otherMatris.sutun;
	
	list = new kompleks*[satir];
	
	for(int i=0 ; i<satir ; i++) {
		
		list[i] = new kompleks [sutun];
	}
	
	for(int i = 0; i < satir; i++){
		for(int j = 0; j < sutun; j++){
			list[i][j] = otherMatris.list[i][j];
		}
	}

	return *this;
	
}

matris matris::operator+(const matris& otherMatris ) const{
	
	int row, col;
	
	if(satir > otherMatris.satir) row = satir;
	else row = otherMatris.satir;
	if(sutun > otherMatris.sutun) col = sutun;
	else col = otherMatris.sutun;
	 
	matris temp(row , col);
	
	
		
	for(int i=0 ; i<row ; i++) {
			
		for(int j=0 ; j<col ; j++) {
				
			temp.list[i][j].setKompleks(0,0);
		}
	}
		
	for(int i=0 ; i<satir ; i++) {
			
		for(int j=0 ; j<sutun ; j++) {
				
			temp.list[i][j] = temp.list[i][j] + list[i][j];
		}
	}
		
	for(int i=0 ; i<otherMatris.satir ; i++) {
			
		for(int j=0 ; j<otherMatris.sutun ; j++) {
				
			temp.list[i][j] = temp.list[i][j] + otherMatris.list[i][j];
		}
	}
		
	return temp;

}

matris matris::operator*(matris& otherMatris){
	
	matris temp(satir, otherMatris.sutun);
	
	if(sutun == otherMatris.satir) {
		
		for(int i=0 ; i<satir ; i++) {
			
			for(int j=0 ; j<otherMatris.sutun ; j++) {
				
				temp.list[i][j] = 0;
				
				for(int k=0 ; k<sutun ; k++) {
					
					temp.list[i][j] = temp.list[i][j] + (list[i][k] * otherMatris.list[k][j]);					
				}				
			}
		}
		
		return temp;
	}
	
	else {
		
		cout << "Iki matris carpilamaz ! ! ! " << endl << endl;
	}
}

matris matris::operator*(int sayi){
	
	matris temp(*this);

	
	for(int i = 0; i < satir; i++){
		for(int j = 0; j < sutun; j++){
			temp.list[i][j] = list[i][j] * sayi;
		}
	}
	
	return temp;
}

//void matris::operator*(int sayi) {
//	
//	for(int i=0 ; i<satir ; i++) {
//		
//		for(int j=0 ; j<sutun ; j++) {
//			
//			list[i][j] * sayi;
//			//cout << list[i][j];
//		}
//	}
//	
//}
// matris dodurme olsa ne dondurecem sor.

matris::~matris() { 

    for (int i=0 ; i<satir ; i++) {
    	
    	delete list[i]; 
	}
	
	delete list; 
} 

