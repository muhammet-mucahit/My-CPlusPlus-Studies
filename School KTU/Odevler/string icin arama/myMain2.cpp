#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string sentence,search="m";
	int count1=0,count2=0,j=0;
	
	cout<<"Enter a string : "; getline( cin , sentence );
	
	for(int i=0; sentence[i]!= '\0'; i++){
		
		if(search[j]==sentence[i]){
			
			for(int k=i;search[j]!='\0';k++){
				
				if(sentence[k]==search[j]){
					count1++;
				}
				j++;
			}
			if(count1==j){
				count2++;
			}
			i=i+(j-1);
			j=0;
			count1=0;
		}
	}
	
	cout<<count2;
	
}
