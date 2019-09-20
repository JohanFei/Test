#pragma once
#include "Person.h"
class Teacher :
	public Person
{
public:
	Teacher(string name, int id, int age);
	int getId();
	int getAge();
	string getName();
	string printPerson();
};

