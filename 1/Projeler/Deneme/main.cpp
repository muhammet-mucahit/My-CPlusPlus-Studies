#include <iostream>
#include <cstdlib>
#include "Kare.cpp"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	Kare ilkKare(3);
	Kare ikinciKare(6);
	
	cout<<"Ilk kare : ";
	ilkKare.kenariYazdir();
	
	cout<<"Ikinci kare : ";
	ikinciKare.kenariYazdir();
	
	//ilkKare.kenar=15;
	ilkKare.kenarDegistir(10);
	
	cout<<"Ilk karenin bir kenari : "<<ilkKare.kenarGetir()<<"\n";
	
	cout<<"Ilk karenin alani : "<<ilkKare.alanBul()<<endl;
	cout<<"Ilk karenin cevresi: "<<ilkKare.cevreBul()<<endl;
	
	cout<<"Ikinci karenin bir kenari : "<<ikinciKare.kenarGetir()<<"\n";
	
	cout<<"Ikinci karenin alani : "<<ikinciKare.alanBul()<<endl;
	cout<<"Ikinci karenin cevresi: "<<ikinciKare.cevreBul()<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
