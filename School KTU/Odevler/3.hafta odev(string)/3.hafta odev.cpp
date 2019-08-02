#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{

	string paragraph,sentence1="",sentence2="";
	int sentence_number=0,pos=0;
	int i=0,j,count=1,k=0,l=0;
	
	ifstream input("oku.txt");
	ofstream output("yaz.txt");
	
	while(getline(input,paragraph)){
		for(j=k;paragraph[j]!=char(46);j++){
			sentence1 = sentence1 + paragraph[j];
		}
		j+=2;
		k=j;
		while(i<=6){
			
			for(j=k;paragraph[j]!=char(46);j++){
				sentence2 = sentence2 + paragraph[j];
			}
			j+=2;
			k=j;
			
			if(sentence1 == sentence2){
				count++;
				sentence1=sentence2;
				sentence2="";
			}
			else{
				output<<"("<<sentence1<<"."<<")"<<"^"<<count<<" ";
				sentence1=sentence2;
				count=1;
				sentence2="";
			}
			i++;
		}
	}
	
	output.close();
	input.close();
}
