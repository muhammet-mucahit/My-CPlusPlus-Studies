#include <iostream>
#include "newClock.h"

using namespace std;

ostream& operator<< (ostream& osObject, 
                     const clockType& timeOut)
{
	if(timeOut.hr < 10)
	   osObject<<'0';
	osObject<<timeOut.hr<<':';
	
 	if(timeOut.min < 10)
	   osObject<<'0';
	osObject<<timeOut.min<<':';
	
	if(timeOut.sec < 10)
	   osObject<<'0';
	osObject<<timeOut.sec;

	return osObject;	//return the ostream object
}

istream& operator>> (istream& isObject, 
                     clockType& timeIn)
{
	char ch;

	isObject>>timeIn.hr;	   //Step a
	isObject.get(ch);  //Step b; read and discard :
	isObject>>timeIn.min;    //Step c
	isObject.get(ch);  //Step d; read and discard :
	isObject>>timeIn.sec;    //Step e

	return isObject;		   //Step f
}


int main(int argc, char** argv) {
	clockType myClock(5,6,23);			//Line 1
	clockType yourClock;				//Line 2

	cout<<"Line 3: myClock = "<<myClock<<endl; //Line 3
	cout<<"Line 4: yourClock = "<<yourClock<<endl;	
								//Line 4

	cout<<"Line 5: Enter time in the form "
	    <<"hr:min:sec ";				//Line 5
	cin>>myClock;					//Line 6
	cout<<"Line 7: The new time of myClock = "
	    <<myClock<<endl;				//Line 7

	++myClock;						//Line 8

	cout<<"Line 9: After increment the time, myClock = "
	    <<myClock<<endl;				//Line 9
	    
	yourClock.setTime(13,35,38);		//Line 10
	cout<<"Line 11: After setting the time, yourClock = "
	    <<yourClock<<endl;				//Line 11

	if(myClock == yourClock)			//Line 12
	   cout<<"Line 13: The times of myClock and "
		 <<"yourClock are equal"<<endl;	//Line 13
	else							//Line 14
	   cout<<"Line 15: The times of myClock and "
		 <<"yourClock are not equal"<<endl;	//Line 15

	if(myClock <= yourClock)			//Line 16
	   cout<<"Line 17: The time of myClock is less "
		 <<"than or equal to "<<endl
		 <<"the time of yourClock"<<endl;	//Line 17
	else							//Line 18
	   cout<<"Line 19: The time of myClock is "
		 <<"greaterthan the time of yourClock"
		 <<endl;					//Line 19


	return 0;
}
