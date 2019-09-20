#pragma once
#include "Person.h"
class Teacher :
	public Person
{
	Person* Students = nullptr;
public:
	Person* getPerson();
	Teacher(string name, int id, int age);
	int getId();
	int getAge();
	string getName();
	string printPerson();
	void addPerson(Person* person);

};

