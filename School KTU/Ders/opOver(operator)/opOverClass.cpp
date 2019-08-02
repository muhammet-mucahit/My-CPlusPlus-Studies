#include "opOverClass.h"


opOverClass::opOverClass()
{
    a = 10;
    b = 10;
    //ctor
}

opOverClass::opOverClass(int a_in, int b_in){
     a = a_in;
     b = b_in;
}



//opOverClass opOverClass::operator++(int x){
//	opOverClass temp=*this;
//	a++;
//	b++;
//	return temp;
//}

//opOverClass opOverClass::operator++(){
//	++a;
//	++b;
//	return *this;
//}


//opOverClass& opOverClass::operator=(const opOverClass& o_in)
//{
//	if(this!=&o_in){
//		this->a=o_in.a;
//		this->b=o_in.b;
//	}
//	
//	return *this;
//}

//bool opOverClass::operator==(opOverClass o_in){
//	if(this->a == o_in.a && this->b == o_in.b){
//		return true;
//	}
//	return false;
//}

opOverClass opOverClass::operator+(opOverClass o_in){
	opOverClass temp;
	temp.a=this->a + o_in.a;
	temp.b=this->b + o_in.b;
	return temp;
}

int opOverClass::get_a(){
  return a;
}
int opOverClass::get_b(){
  return b;
}
opOverClass::~opOverClass()
{
    //dtor
}
