#include "frienFunctionExample.h"

friendFunctionExample::friendFunctionExample()
{
    //ctor
}

friendFunctionExample::~friendFunctionExample()
{
    //dtor
}

void friendFunctionExample::print()
{
	cout<<"In class friendFunctionExample: x = "<<x<<endl;
}

void friendFunctionExample::setx(int a)
{
		x = a;
}

void myFriend(friendFunctionExample cLFObject)		//Line 1
{
    friendFunctionExample localTwoObject;

    localTwoObject.x = 45;
    localTwoObject.print();

    cout<<endl;
    cout<<"In Friend Function myFriend accessing "
	      <<"private data member x "
	      <<localTwoObject.x<<endl;

    cLFObject.x = 88;
    cLFObject.print();

    cout<<endl;
    cout<<"In Friend Function myFriend accessing "
	      <<"private data member x "
	      <<cLFObject.x<<endl;

}
