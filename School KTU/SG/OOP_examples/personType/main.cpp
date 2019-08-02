#include <iostream>
#include "personType.h"
using namespace std;

int main()
{
   personType student1("Angela", "Clodfelter");
   personType student2;
   personType student3;

   cout<<"Student 1: ";
   student1.print();
   cout<<endl;

   //this pointer is used here to set both firstName and lastName
   //this burada kullaniliyor.
   student2.setFirstName("Shelly").setLastName("Malik");
   cout<<"Student 2: ";
   student2.print();
   cout<<endl;

   student3.setFirstName("Chelsea");
   cout<<"Student 3: ";
   student3.print();
   cout<<endl;

   student3.setLastName("Tomek");
   cout<<"Student 3: ";
   student3.print();
   cout<<endl;

   return 0;
}
