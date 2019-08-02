#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string sentence1, sentence2, paragraf;
	int tekrar = 1, pos=0;
	ifstream readFile("oku.txt");
    ofstream writeFile("yaz.txt");
    while(getline(readFile, paragraf)) {
		pos=paragraf.find('.');
		sentence1 = paragraf.substr(0, pos+1);
        paragraf=paragraf.substr(pos+1, paragraf.length()-pos+1);
		while((pos=paragraf.find('.'))!=-1) {
			sentence2=paragraf.substr(1, pos);
			paragraf=paragraf.substr(pos+1, paragraf.length()-pos+1);
			if(sentence1==sentence2)
	            tekrar++;
			else {
				if(tekrar!=1) {
					writeFile<<"("<<sentence1<<")^"<<tekrar<<' ';
					tekrar=1;
				}
				else
					writeFile<<sentence1<<' ';
			}
			sentence1=sentence2;
		}
		writeFile << sentence2<<endl;
    }
    readFile.close();
    writeFile.close();
	return 0;
}
