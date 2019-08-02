#include "opOverClass.h"
#include <cassert>
//#include<iostream>

//using namespace std;

int& opOver::operator[](int index){
	
	assert(0 <= index && index < arraySize);
	
    return(list[index]);  
}

const int& opOver::operator[](int index) const{
	
	assert(0 <= index && index < arraySize);
	
    return(list[index]);  

}
