#include <iostream>
#include "SavingsAccount.h"

using namespace std;

MevduatHesabi::MevduatHesabi(double bky, double oran) : Hesap(bky){

	faizOrani = oran;
}

double MevduatHesabi::faizHesapla(){

	return(faizOrani * bakiyeDondur());
}