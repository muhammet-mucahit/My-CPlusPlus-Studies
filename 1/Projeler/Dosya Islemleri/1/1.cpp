#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string yazi = "Bu bir denemedir";
	string isim = "Merhaba\tNasilsiniz\nIyi misiniz?";
	
	//cout<<yazi;
	
	ofstream cikti("dosyaIsmi.txt");
	
	//cikti<<yazi;
	cikti<<isim;
	cout<<"Islem Tamamlandi.";
}
