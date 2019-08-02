#ifndef CASHREGISTER_H
#define CASHREGISTER_H

#include <iostream>
#include <string>

using namespace std;



class cashRegister
{
    public:
        cashRegister(double = 100.0);
        double get_amount();
        void make_sale(double);
        void print();
        virtual ~cashRegister();
    protected:
    private:
        double amount_in;
};

#endif // CASHREGISTER_H
