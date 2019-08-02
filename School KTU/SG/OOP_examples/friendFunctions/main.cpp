#include <iostream>
#include "frienFunctionExample.h"
using namespace std;

int main()
{
    friendFunctionExample aObject;

	aObject.setx(32);

	cout<<"aObject.x: ";
	aObject.print();
	cout<<endl;
	cout<<"*~*~*~*~*~* Testing Friend Function "
	    <<"myFriend *~*~*~*~*~*" << endl << endl;

	myFriend(aObject);

    return 0;
}
