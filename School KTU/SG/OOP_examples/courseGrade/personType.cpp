#include <iostream>
#include <string>

using namespace std;

#include "personType.h"


void personType::print() const
{
	cout<<firstName<<" "<<lastName;
}

void personType::setName(string first, string last)
{
		firstName = first;
		lastName = last;
}

void personType::getName(string& first, string& last)
{
		first = firstName;
		last = lastName;
}

personType::personType() {
   firstName = "";
   lastName = "";
}

