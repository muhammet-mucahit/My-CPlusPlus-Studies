#include <iostream>
#include <iomanip>
#include <cstring>
#include <cassert>
#include <string.h>
#include "newString.h"

using namespace std;


bool newString::operator==(const newString& obj) const{

    return(strcmp(strPtr , obj.strPtr)!=1);

//	int i,count=0;
//	
//	if(strLength == obj.strLength){
//		
//		for(i=0 ; i<strLength ; i++){
//			
//			if(strPtr[i]==obj.strPtr[i]){
//				
//				count++;
//			}
//			
//		}
//		
//		if(count == strLength)
//		return true;
//		
//		else 
//		return false;
//	}
//	
//	return false;
}

bool newString::operator!=(const newString& obj) const{

	return(strcmp(strPtr , obj.strPtr)==1);
	
//  TERSTEN YAPABILIRSIN COUNT KULANNMANA GEREK OLMAZ DUSUN.
	
//	int i,count=0;
//	
//	if(strLength == obj.strLength){
//		
//		for(i=0 ; i<strLength ; i++){
//			
//			if(strPtr[i]==obj.strPtr[i]){
//				
//				count++;
//			}
//			
//		}
//		
//		if(count == strLength)
//		return false;
//		
//		else 
//		return true;
//	}
//	
//	return true;
	
}

const newString& newString::operator=(const newString& strObj){
	
	strcmp(this->strPtr , strObj.strPtr);
	this->strLength = strObj.strLength;
	
	return *this;
	
}
	


char &newString::operator[](int index){
	
	assert(index>=0 && index<strLength);
	
	return(strPtr[index]);
}

const char &newString::operator[](int index) const{
	
	assert(index>=0 && index<strLength);
	
	return(strPtr[index]);
}

newString::newString()
{
  strLength = 1; //allocate astring with a length of only one char
  strPtr = new char[1];
  strcpy(strPtr,"");
  //ctor
}

newString::newString(const char * inStr){
  strLength = strlen(inStr);
  strPtr = new char[strLength+1]; 	//allocate
  strcpy(strPtr, inStr);  //copy string into strPtr
}

newString::newString(const newString& strToCopy)
{
	strLength = strToCopy.strLength;
	strPtr = new char[strLength + 1];
	strcpy(strPtr, strToCopy.strPtr);
}

newString::~newString()
{
    delete [] strPtr;
    //dtor
}
