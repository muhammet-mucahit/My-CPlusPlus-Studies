#include <iostream>
#include <iomanip>
#include <string.h>
#include "newString.h"

using namespace std;

ostream& operator<<(ostream&, const newString&);
istream& operator>>(istream&, newString&);

int main()
{
    newString a("My name is juno");
    newString b("My name is Juno");
    newString c;
    
    //cout<<"+++";
    cin>>a;
    cout<<a;
    
    
    //bool x = (a != b);
    //cout<<x;
    
    //cout << "Hello world!" << endl;
    return 0;
}

ostream& operator<<(ostream& osObj , const newString& strObj){
	
	int i;
	
	for(i=0 ; i<strObj.strLength ; i++){
		
		osObj << strObj.strPtr[i];
	}
	
	return osObj;
	
//	osObj << strObj.strPtr;
//	
//	return osObj;
	
}

istream& operator>>(istream& isObj , newString& strObj){
	
	char temp[81];

	isObj>>setw(81)>>temp;
	strObj = temp;

	return isObj;

	
//	int i;
//	char temp[80];
//	
//	for(i=0 ; i<strObj.strLength ; i++){
//		
//		isObj >> strObj.strPtr[i];
//	}
//	
//	return isObj;
	
}
