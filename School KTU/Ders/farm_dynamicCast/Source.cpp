#include <iostream>
#include <typeinfo>
#include "farm.h"

using namespace std;

#define ARK_CAPACITY 20
#define NUMBER_OF_SPECIES 4
enum SPECIES {
	SPECIES_DOG,
	SPECIES_CAT,
	SPECIES_COW,
	SPECIES_NGALE,
};

void voice_of_animal(Animal *[]);

int main()
{
	Animal *noah_ark[ARK_CAPACITY];

	for (int species_index = 0; species_index < NUMBER_OF_SPECIES; species_index++) {
		for (int animal_index = 0; animal_index < ARK_CAPACITY / NUMBER_OF_SPECIES; animal_index++)
		{
			switch (species_index) {
			case SPECIES_DOG:
				noah_ark[animal_index + species_index * ARK_CAPACITY / NUMBER_OF_SPECIES] = new Dog;
				break;
			case SPECIES_CAT:
				noah_ark[animal_index + species_index * ARK_CAPACITY / NUMBER_OF_SPECIES] = new Cat;
				break;
			case SPECIES_COW:
				noah_ark[animal_index + species_index * ARK_CAPACITY / NUMBER_OF_SPECIES] = new Cow;
				break;
			case SPECIES_NGALE:
				noah_ark[animal_index + species_index * ARK_CAPACITY / NUMBER_OF_SPECIES] = new Nightingale;
				break;
			default:
				break;
			}
		}
	}

	voice_of_animal(noah_ark);

	return 0;
}
void voice_of_animal(Animal *p[])
{
	Dog * pDog;
	Cat * pCat;
	Cow * pCow;
	for (int ark_index = 0; ark_index < ARK_CAPACITY; ark_index++) {

		pDog = dynamic_cast <Dog *>(p[ark_index]);
		pCat = dynamic_cast <Cat *>(p[ark_index]);
		pCow = dynamic_cast <Cow *>(p[ark_index]);
		if (pDog != 0) cout << "This is a " << &typeid(*p[ark_index]).name()[1] << " Sense of smell rating " << pDog->getSmellSenseRating() << endl;
		else if (pCat != 0) cout << "This is a " << &typeid(*p[ark_index]).name()[1] << endl;
		else if (pCow != 0) cout << "This is a " << &typeid(*p[ark_index]).name()[1] << endl;
		else cout << "This is a " << &typeid(*p[ark_index]).name()[1] << endl;

	}
}