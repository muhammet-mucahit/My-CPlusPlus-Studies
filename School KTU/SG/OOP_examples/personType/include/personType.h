#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <iostream>
#include <string>
using namespace std;

class personType
{
public:
    void print() const;
    void setName(string first, string last);
    personType& setLastName(string last); //object is returned from the function
	personType& setFirstName(string first);//object is returned from the function
	void getName(string& first, string& last);
    personType(string first = "", string last = ""); //Constructor

private:
    string firstName; //store the first name
    string lastName;  //store the last name
};
#endif // PERSONTYPE_H
