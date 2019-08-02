#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string sentence,search="akte";
	int pozition=0,count=0;
	int search_l=search.length();
	
	ifstream input("sentence.txt");
	getline(input,sentence);
	
	while((pozition=sentence.find(search))!=string::npos){
		count++;
		sentence=sentence.substr(pozition+search_l,sentence.length());
	}
	
	cout<<count;
	return 0;
	input.close();
}
