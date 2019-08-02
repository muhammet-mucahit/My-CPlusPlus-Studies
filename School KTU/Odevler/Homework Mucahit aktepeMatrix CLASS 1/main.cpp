#include <iostream>
#include <fstream>
#include "complex.h"
#include "matrix.h"

using namespace std;

ostream& operator<<(ostream& , const kompleks&);
istream& operator>>(istream& , kompleks&);
ostream& operator<<(ostream& , const matris&);
istream& operator>>(istream& , matris&);


int main() {
	
	
	matris matris1(3,3);
	matris matris2(2,2);
	matris matris3;
	
	matris1.oku();
	matris2.oku();
	
	
	
	cout << matris1;
	cout << "-------------------" << endl;
	cout << matris2;
	
	cout << endl;
	//matris1*2;
	//cout << matris1;
	matris3 = matris1 * 2;
	//cout << matris1 + matris2;
	//matris3.yaz();
	
	cout << matris3;
	
	//cout << matris1 * matris2;
	
	return 0;
}

ostream& operator<<(ostream& osObj, const matris& otherMatris) {
	
	for(int i=0 ; i<otherMatris.satir ; i++) {
		
		for(int j=0 ; j<otherMatris.sutun ; j++) {
			
			osObj << otherMatris.list[i][j] << " "; 
		}
		cout << endl;
	}
	
	return osObj;
}

istream&operator>>(istream& isObj, matris& otherMatris) {
	
	for(int i=0 ; i<otherMatris.satir ; i++) {
		
		for(int j=0 ; j<otherMatris.sutun ; j++) {
			
			cout  << "matris[" << i << "][" << j << "] = ";
			isObj >> otherMatris.list[i][j];
		}
	}
	
	cout << endl;
	
	return isObj;
}


ostream& operator<<(ostream& ost , const kompleks& komp){
	
	ost << "(";
	ost << komp.gercekKisim;
	ost << " , ";
	ost << komp.sanalKisim;
	ost << ")";
	
	return ost;
}

istream& operator>>(istream& ist, kompleks& komp){
	
	char ch;
	
	ist >> ch;
	ist >> komp.gercekKisim;
	ist >> ch,
	ist >> komp.sanalKisim;
	ist >> ch;
	
	return ist;
}

