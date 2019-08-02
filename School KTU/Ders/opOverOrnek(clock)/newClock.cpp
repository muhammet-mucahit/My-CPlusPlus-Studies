#include "newClock.h"

clockType clockType::operator++()
{
    	sec++;  			//Step a

	if(sec > 59)  		//Step b
	{
	   sec = 0;			//Step b.1

	   min++;    		//Step b.2

	   if(min > 59)		//Step b.3
	   {
		min = 0;		//Step b.3.1

		hr++;			//Step b.3.2

		if(hr > 23)		//Step b.3.3
		   hr = 0;		//Step b.3.3.1
	   }
	}
   
	return *this;   		//Step c
}

bool clockType::operator==
               (const clockType& otherClock) const
{
     return(hr == otherClock.hr && min == otherClock.min
		 && sec == otherClock.sec);
}



//overload the less than or equal to operator
bool clockType::operator<=(const clockType& otherClock) const
{
   return((hr < otherClock.hr) ||
	    (hr == otherClock.hr && min < otherClock.min) ||
	    (hr == otherClock.hr && min == otherClock.min &&
	       sec <= otherClock.sec));
}

clockType::clockType(int hours, int minutes, int seconds)
{
	if(0 <= hours && hours < 24)
	   hr = hours;
	else 
	   hr = 0;

	if(0 <= minutes && minutes < 60)
	   min = minutes;
	else 
	   min = 0;

	if(0 <= seconds && seconds < 60)
	   sec = seconds;
	else 
	   sec = 0;
}

void clockType::setTime(int hours, int minutes, int seconds)
{
	if(0 <= hours && hours < 24)
	   hr = hours;
	else 
	   hr = 0;

	if(0 <= minutes && minutes < 60)
	   min = minutes;
	else 
	   min = 0;

	if(0 <= seconds && seconds < 60)
	   sec = seconds;
	else 
	   sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds)
{
	hours = hr;
	minutes = min;
	seconds = sec;
}





