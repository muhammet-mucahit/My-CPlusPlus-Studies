#ifndef NEWSTRING_H
#define NEWSTRING_H

#include <iostream>
using namespace std;


class newString
{
    //overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const newString&);
    friend istream& operator>>(istream&, newString&);

    public:
        //overload the assignment operator
        const newString& operator=(const newString&);
        //constructor; conversion from the char string
        newString(const char *);
        //default constructor
        newString();
        //copy constructor
        newString(const newString&);
        //destructor
        virtual ~newString();
        //overload [] operator
        char &operator[] (int);
        const char &operator[](int) const;

        //overload the relational operators
        bool operator==(const newString&) const;
        bool operator!=(const newString&) const;

    protected:
    private:
        char *strPtr;  //pointer to the char array
        int strLength; //data member to store the length of the string
};

#endif // NEWSTRING_H
