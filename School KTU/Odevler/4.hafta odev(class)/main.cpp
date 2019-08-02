#include <iostream>
#include <string>
#include <fstream>
#include "takim.h"

using namespace std;

void sorting(soccerTeam []);

int main() {
	
	string name;
	int win, lose, tie, agoal, ygoal;
	
	soccerTeam teams[5];
	string veri;
	
	ifstream input("bilgi.txt");
	
	for(int i=0; i<5; i++) {
		
		input >> name >> win >> lose >> tie >> agoal >> ygoal; 
		teams[i].set(name, win, lose, tie, agoal, ygoal);
	}
		
	sorting(teams);
	
	cout<<"                P      \tG\tM\tB\tA\tY\tA"<<endl;
	
	for(int i=0; i<5; i++) {
		
		teams[i].print();
		cout<<endl;
	}
	
	input.close();
	

	return 0;
}

void sorting(soccerTeam team[]) { 
	
	soccerTeam temp;
	int count=0;
	
	while(count < 5){
		for(int i=0; i<5; i++) {
			
			if(!team[i].compare(team[i+1])) {
				
				temp = team[i];
				team[i] = team[i+1];
				team[i+1] = temp;
			}
		}
		count++;
	}
		
	
	
	
	
	
	
}
