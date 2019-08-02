#include<cstdlib>
#include <iostream>
#include "Kare.cpp"

using namespace std;

int main() 
{
	Kare obje1(5), obje2(10), obje3(15), obje4(20);

	obje1.goruntule();
	obje2.goruntule();
	obje3.goruntule();
	obje4.goruntule();
	
	obje1.kenarDegistir(1);
	obje2.kenarDegistir(2);
	obje3.kenarDegistir(3);
	obje4.kenarDegistir(4);
	
	cout<<"Degistirilmis Kenarlar : \n\n";
	
	obje1.goruntule();
	obje2.goruntule();
	obje3.goruntule();
	obje4.goruntule();
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
