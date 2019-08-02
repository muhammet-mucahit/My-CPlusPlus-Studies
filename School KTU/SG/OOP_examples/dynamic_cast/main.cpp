#include <iostream>
#include <typeinfo>
#include "dynamic_cast_class.h"
using namespace std;


//dynamic_cast test function...
void funct3()
{
   //instantiate objects...
   dynamic_cast_class* Test1 = new Derived1;
   dynamic_cast_class* Test2 = new dynamic_cast_class;
   //making Test1 pointing to Derived1
   Derived1* Test3 = dynamic_cast<Derived1*>(Test1);

   cout<<"Derived1* Test3 = dynamic_cast<Derived1*>(Test1);"<<endl;

   if(!Test3)
      cout<<"The conversion is fail..."<<endl;
   else
      cout<<"The conversion is successful..."<<endl;

    //should fail, Test2 pointing to Base1 not Derived1, Test4 == NULL

    Derived1* Test4 = dynamic_cast<Derived1*>(Test2);
    cout<<"\nDerived1* Test4 = dynamic_cast<Derived1*>(Test2);"<<endl;
    if(!Test4)
       cout<<"The conversion has failed..."<<endl;
    else
       cout<<"The conversion is successful..."<<endl;

    //reconfirm, Test4 should be a NULL pointer...
    cout<<"Test4 should be a NULL pointer = "<<Test4<<endl;
    cout<<"Type id on Test1 pointer = "<<typeid(Test1).name()<<endl;
    cout<<"Type id on Test2 pointer = "<<typeid(Test2).name()<<endl;
    cout<<"Type id on Test3 pointer = "<<typeid(Test3).name()<<endl;
}



int main()
{
    cout << "Hello world!" << endl;
    funct3();
    return 0;
}
