#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED
#include <iostream>
#include <string>
//change these compiler keys to enable virtual and pure virtual functions
#define _ABSTRACT_ 0
#define _VIRTUAL_ 1
using namespace std;

class Animal
{
protected:
	string voice;
public:
#if !_ABSTRACT_
	Animal();
#endif
	virtual ~Animal();
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
	int smellSense;
public:
	Dog();
	~Dog();
	string getVoice() { return voice + " " + sign; }
	int getSmellSenseRating() { return smellSense; }
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

class Nightingale : public Animal
{
	string sign;
public:
	Nightingale();
	~Nightingale();
	string getVoice() { return voice + " " + sign; }
};

#endif // FARM_H_INCLUDED