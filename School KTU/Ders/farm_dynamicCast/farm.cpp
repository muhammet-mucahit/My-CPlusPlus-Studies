#include "farm.h"

#if !_ABSTRACT_
Animal::Animal(){
	voice = "default value";
}
#endif

Animal::~Animal()
{

}
Dog::Dog()
{
	sign = "D";
	voice = "hau";
	smellSense = 9;
}
Dog::~Dog()
{

}

Cat::Cat()
{
	sign = "C";
	voice = "meow";
}

Cat::~Cat()
{

}


Cow::Cow(){
	sign = "Co";
	voice = "mooo";
}


Cow::~Cow()
{

}



Nightingale::Nightingale(){
	sign = "N";
	voice = "ciik";
}


Nightingale::~Nightingale()
{

}
