#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED
#include <iostream>
#include <string>
#define _ABSTRACT_ 1
#define _VIRTUAL_ 0
using namespace std;

class Animal
{
protected:
	string voice;
public:
#if !_ABSTRACT_
	Animal();
#endif
	~Animal();
#if _ABSTRACT_
	virtual string getVoice() = 0; //{return voice;}
#else
#if _VIRTUAL_
	virtual string getVoice(){ return voice; }
#else
	string getVoice(){ return voice; }
#endif // _VIRTUAL_
#endif
};

class Dog : public Animal
{
	string sign;
public:
	Dog();
	~Dog();
	string getVoice() { return voice + " " + sign; }
};
class Cat : public Animal
{
	string sign;
public:
	Cat();
	~Cat();
	string getVoice() { return voice + " " + sign; }
};
class Cow : public Animal
{
	string sign;
public:
	Cow();
	~Cow();
	string getVoice() { return voice + " " + sign; }
};

#endif // FARM_H_INCLUDED