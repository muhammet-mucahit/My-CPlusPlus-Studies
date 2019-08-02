#include "cashRegister.h"

cashRegister::cashRegister(double money_in)
{
     amount_in = money_in;
    //ctor
}

double cashRegister::get_amount(){
     return amount_in;
}

void cashRegister::make_sale(double sale_value){
     amount_in += sale_value;
}

void cashRegister::print(){
     cout << endl << "Cash in the register :" << amount_in << endl << endl;
}

cashRegister::~cashRegister()
{
    //dtor
}
