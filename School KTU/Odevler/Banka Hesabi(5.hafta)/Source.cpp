#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;

int main(){

	Hesap hesap1(50.0);
	MevduatHesabi hesap2(20.0, .05);
	VadesizHesap hesap3(80.0, 1.0);

	//cout << hesap1.bakiyeDondur() << endl;

	//hesap1.paraCek(40.0);
	//cout << hesap1.bakiyeDondur() << endl;

	//hesap1.paraCek(50.0);
	//cout << endl;

	//hesap1.paraYatir(10.0);
	//cout << hesap1.bakiyeDondur() << endl;

	/*cout << hesap2.bakiyeDondur();
	cout << endl;
	
	cout << "%" << hesap2.faizHesapla() << endl;

	hesap2.paraCek(10);
	cout << hesap2.bakiyeDondur() << endl;

	hesap2.paraCek(50);
	cout << endl;

	hesap2.paraYatir(50);
	cout << hesap2.bakiyeDondur() << endl;*/

	cout << hesap3.bakiyeDondur() << endl;

	hesap3.paraCek(70);
	cout << hesap3.bakiyeDondur() << endl;

	hesap3.paraCek(60);
	cout << endl;

	hesap3.paraYatir(50);
	cout << hesap3.bakiyeDondur() << endl;

	hesap3.paraCek(20);
	cout << hesap3.bakiyeDondur() << endl;




}