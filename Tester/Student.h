#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Person* Teacher= nullptr;
	Student(string name, int id, int age);
	int getId();
	int getAge();
	string getName();
	string printPerson();
	void addPerson(Person* person);
	void setPerson(Person* person);

};

