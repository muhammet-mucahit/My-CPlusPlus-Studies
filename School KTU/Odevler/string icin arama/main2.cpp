#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
//    ofstream dosya("ilk.txt", ios::app);
  string cumle, ara="ab";
  cout<<"Bir string giriniz"<<endl;
  getline(cin, cumle);
  int sayac=0, konum, ara_uz=ara.length();
  while((konum=cumle.find(ara))!=string::npos)
  {
    sayac++;
    cumle=cumle.substr(konum+ara_uz, cumle.length()-konum-ara_uz);
  }
  cout<<endl<<sayac;
    return 0;
}

