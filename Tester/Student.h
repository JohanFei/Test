#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Student(string name, int id, int age);
	int getId();
	int getAge();
	string getName();
	string printPerson();
};

