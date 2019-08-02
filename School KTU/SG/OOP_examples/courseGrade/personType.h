#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class personType
{
public:
    void print() const;
  
    void setName(string first, string last);

    void getName(string& first, string& last);

    personType(string first, string last);

    personType(); 

 private:
    string firstName; 
    string lastName; 
};
#endif
