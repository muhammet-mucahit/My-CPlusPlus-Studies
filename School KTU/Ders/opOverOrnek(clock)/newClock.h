#include<iostream>

#ifndef H_newClock
#define H_newClock


using namespace std;

class clockType
{
    friend ostream& operator<< (ostream&, const clockType&);
    friend istream& operator>> (istream&, clockType&);

public:
    void setTime(int hours, int minutes, int seconds);
	//Function to set the private data members 
	//hr, min, and sec 
	//Post: hr = hours; min = minutes; sec = seconds

    void getTime(int& hours, int& minutes, int& seconds);
	//Function to return the time
	//Post: hours = hr; minutes = min; seconds = sec;

    clockType operator++();    
	//Overload the pre-increment operator
  	//Post: Time is incremented by one second
  	bool operator==(const clockType& otherClock) const; 
	//Overload the equality operator
	//Function returns true if the time is equal 
	//to otherTime, otherwise it returns the value false

    bool operator<=(const clockType& otherClock) const;
	//Overload the less than or equal to operator
	//Function returns true if the time is less 
	//than or equal to otherTime, otherwise it returns
	//the value false

    clockType(int hours = 0, int minutes = 0, int seconds = 0);  
	//Constructor to initialize the object with the
	//values specified by the user. If no values are
	// specified, default values are assumed.
	//Post: hr = hours; min = minutes; sec = seconds

private: 
    int hr;  //variable to store the hours
    int min; //variable to store the minutes
    int sec; //variable to store the seconds
};


