#ifndef TAKIM_H
#define TAKIM_H
#include <string>

using namespace std;

class soccerTeam{
	
	string name;
	int win;
	int lose;
	int tie;
	int agoal;
	int ygoal;
	int point;
	int average;
	
public:
	soccerTeam(string ad = "", int galip = 0, int maglup = 0, int beraber = 0, int agol = 0, int ygol = 0);
	void print();
	void set(string, int, int, int, int, int);
	bool compare(soccerTeam&);
	
 
};


#endif
