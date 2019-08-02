#include "complex.h"
//#include<iostream>

//using namespace std;

kompleks::kompleks(double gercek , double sanal){
	
	gercekKisim = gercek;
	sanalKisim  = sanal;
}

const kompleks& kompleks::operator=(const kompleks& otherObj) {
	
	gercekKisim = otherObj.gercekKisim;
	sanalKisim  = otherObj.sanalKisim;
	
	return *this;
}

bool kompleks::operator==(const kompleks& digerKompleks) const {
	
	if(this->gercekKisim == digerKompleks.gercekKisim && this->sanalKisim == digerKompleks.sanalKisim){
		
		return true;
	}
	
	return false;	
}

void kompleks::setKompleks(const double& gercek , const double& sanal){
	
 	gercekKisim = gercek;
	sanalKisim  = sanal;
}

kompleks kompleks::operator+(const kompleks& digerKompleks) const{
	
	kompleks temp;
	
	temp.gercekKisim = this->gercekKisim + digerKompleks.gercekKisim;
	temp.sanalKisim  = this->sanalKisim  + digerKompleks.sanalKisim;
	
	return temp; 
	
}

kompleks kompleks::operator*(const kompleks& digerKompleks) const{
	
	kompleks temp;
	
	temp.gercekKisim = (this->gercekKisim * digerKompleks.gercekKisim)-(this->sanalKisim * digerKompleks.sanalKisim);
	temp.sanalKisim  = (this->gercekKisim * digerKompleks.sanalKisim + this->sanalKisim * digerKompleks.gercekKisim);
	
	return temp;
	
}

kompleks kompleks::operator*(int sayi){
	
	kompleks temp;
	
	temp.gercekKisim = gercekKisim * sayi;
	temp.sanalKisim = sanalKisim * sayi;
	
	return temp;
	
}

//void kompleks::operator*(int sayi) {
//	
//	gercekKisim = gercekKisim * sayi;
//	sanalKisim  = sanalKisim  * sayi;
//	
//}






