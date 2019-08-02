#ifndef OPOVERCLASS_H
#define OPOVERCLASS_H
#include<iostream>

using namespace std;

class opOverClass
{
 public :
   opOverClass();
   opOverClass(int a_in, int b_in);
   int get_a();
   int get_b();
   opOverClass operator+(opOverClass o_in);
   //friend opOverClass operator+(opOverClass o_in1 , opOverClass o_in2);
   //bool operator==(opOverClass o_in);
   //friend bool operator==(opOverClass o_in1,opOverClass o_in2);
   //opOverClass &operator=(const opOverClass&); // (), [], ->, =  sadece uye olarak yapilabilir.
   friend ostream& operator<<(ostream&,const opOverClass);
   friend istream& operator>>(istream&,opOverClass&);
	//opOverClass operator++();
	//friend opOverClass operator++(opOverClass&);
	//opOverClass operator++(int);
	//friend opOverClass operator++(opOverClass&,int);

   
   

   virtual ~opOverClass();


   private:
   int a;
   int b;
};
#endif // OPOVERCLASS_H
