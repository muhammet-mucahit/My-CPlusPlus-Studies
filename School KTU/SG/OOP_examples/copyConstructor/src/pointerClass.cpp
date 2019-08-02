#include "pointerClass.h"
#include <iostream>
using namespace std;


pointerClass::~pointerClass()
{
    	delete [] p;//dtor
}

void pointerClass::print() const
{
	cout<<"x = "<<x<<endl;

	cout<<"p = ";

	for(int i = 0; i < lenP; i++)
	    cout<<p[i]<<" ";
	cout<<endl;
}

void pointerClass::setData()
{
	cout<<"Enter an integer for x: ";
	cin>>x;
	cout<<endl;

	cout<<"Enter "<<lenP<<" numbers: ";

	for(int i = 0; i < lenP; i++)
	    cin>>p[i];

	cout<<endl;
}


void pointerClass::destroyP()
{
	lenP = 0;
	delete [] p;
	p = NULL;
}

pointerClass::pointerClass()
{
	x = 0;

    lenP = 10;

	p = new int[lenP];
}


//copy constructor
pointerClass::pointerClass
 	           (const pointerClass& otherObject)
{
      x = otherObject.x;

      lenP = otherObject.lenP;
      p = new int[lenP];

      for(int i = 0; i < lenP; i++)
	         p[i] = otherObject.p[i];

}
