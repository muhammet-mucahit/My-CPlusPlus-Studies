#include <iostream>
#include <fstream>

using namespace std;

enum days{monday, tuesday, wednesday, thursday, friday, saturday, sunday};

void printEnum(ofstream& , days);

int main()
{
	ofstream file("ilk.txt");
	days now;
	
	for(now=sunday; now<365; now=static_cast<days>(now+1));
	
	cout<<now;
	printEnum(file,now);
	
	file.close();
	return 0;
}

void printEnum(ofstream& file, days now){
	
	switch(static_cast <days> (now % 7)){
		case monday:file <<"Monday";break;
		case tuesday:file <<"Tuesday";break;
		case wednesday:file <<"Wednesday";break;
		case thursday:file <<"Thursday";break;
		case friday:file <<"Friday";break;
		case saturday:file <<"Saturday";break;
		case sunday:file <<"Sunday";break;
	}
}

