#ifndef FRIENFUNCTIONEXAMPLE_H
#define FRIENFUNCTIONEXAMPLE_H
#include <iostream>
#include <string>
using namespace std;

class friendFunctionExample
{
    friend void myFriend(friendFunctionExample cLFObject); //friend function

    public:
        void print();
        void setx(int a);
        friendFunctionExample();
        virtual ~friendFunctionExample();
    protected:
    private:
        int x;
};

#endif // FRIENFUNCTIONEXAMPLE_H
