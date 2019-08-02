#include "personType.h"

personType& personType::setLastName(string last)
{
	lastName = last;

	return *this; //return value of this (the object itself)
	              // this'in degerini cevir (nesnenin kendisi)
}

personType& personType::setFirstName(string first)
{
	firstName = first;

	return *this;//return value of this (the object itself)
                 // this'in degerini cevir (nesnenin kendisi)
}

personType :: personType(string first, string last){
    firstName = first;
    lastName = last;
}

void personType::getName(string& first, string& last){
     first = firstName;
     last = lastName;
}

void personType::print() const{
     cout << "First name : " << firstName << " Last name : " << lastName << endl;
}

void personType::setName(string first, string last){ //fill this

}
