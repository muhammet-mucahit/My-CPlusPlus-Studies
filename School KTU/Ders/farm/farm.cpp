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
Cow::Cow()
{
	sign = "CO";
	voice = "moooo";
}
Cow::~Cow()
{

}
