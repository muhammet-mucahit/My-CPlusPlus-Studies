#include "takim.h"
#include <iostream>
#include <string>

using namespace std;

soccerTeam::soccerTeam(string ad, int galip, int maglup, int beraber, int agol, int ygol){
	
	name    = ad;
	win     = galip;
	lose    = maglup;
	tie     = beraber;
	agoal   = agol;
	ygoal   = ygol;
	average = agol - ygol;	
	point = win * 3 + tie;
}

void soccerTeam::print(){
	
	cout << name << "\t" << point << "\t" << win << "\t" << lose << "\t" << tie << "\t" << agoal << "\t" << ygoal << "\t" << average << endl;
	
}

void soccerTeam::set(string ad, int galip, int maglup, int beraber, int agol, int ygol){
	
	name    = ad;
	win     = galip;
	lose    = maglup;
	tie     = beraber;
	agoal   = agol;
	ygoal   = ygol;
	average = agol - ygol;
	point = win * 3 + tie;	
}

bool soccerTeam::compare(soccerTeam& otherTeam){
	
	if (point != otherTeam.point){
		if (point > otherTeam.point) return true;
		else return false;
	}
	
	else {
		if (average > otherTeam.average) return true;
		else return false;
	}
	
	
}
