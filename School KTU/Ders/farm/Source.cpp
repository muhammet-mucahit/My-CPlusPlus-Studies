#include <iostream>
#include "farm.h"

using namespace std;

void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);
int main()
{
	
	Animal *pAnimal;

	//Animal * pAnimal = new Dog; //Up CAST
	//Animal * p1Animal = new Cat;

	//voiceOfAnimal(pAnimal);
	//voiceOfAnimal(p1Animal);

	//delete pAnimal;
	//delete p1Animal;

	return 0;
}
void voiceOfAnimal(Animal *p)
{
	cout << p->getVoice() << endl;
}
void voiceOfAnimal(Animal &p)
{
	cout << p.getVoice() << endl;
}