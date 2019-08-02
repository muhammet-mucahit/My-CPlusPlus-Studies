#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

string daysOfWeek[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
enum day{ sunday = 1, monday, tuesday, wednesday, thursday, friday, saturday};

int main (int argc, char *argv[]) {
   if (argc < 2 ) {cout << "Enter a day index (1-7)" << endl; return -1;}
   int dayIndex = atoi(argv[1]);
   switch (dayIndex) {
       case sunday:
            cout << daysOfWeek[sunday] << endl;break;
       case monday:
            cout << daysOfWeek[monday] << endl;break;
       case tuesday:
            cout << daysOfWeek[tuesday] << endl;break;
       case wednesday:
            cout << daysOfWeek[wednesday] << endl;break;
       case thursday:
            cout << daysOfWeek[thursday] << endl;break;
       case friday:
            cout << daysOfWeek[friday] << endl;break;
       case saturday:
            cout << daysOfWeek[saturday] << endl;break;
       default:
            cout <<"no such day" << endl;
            break;
   }

   return 0;
}
