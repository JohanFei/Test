#include "Teacher.h"

Person* Teacher::getPerson()
{
	return Students;
}

Teacher::Teacher(string name, int id, int age)
{
	this->age = age;
	this->id = id;
	this->name = name;
}

int Teacher::getId()
{
	return id;
}

int Teacher::getAge()
{
	return age;
}

string Teacher::getName()
{
	return name;
}

string Teacher::printPerson()
{
	return "---------------------------\n         TEACHER\n---------------------------\n" + Person::printPerson();
}

void Teacher::addPerson(Person* person)
{
	if (!Students) {
		Students = person;
	}
	else {
		Person* curr = Students;
		while (curr)
		{
			curr = curr->getPerson()->getPerson();
		}
		*curr->getPerson()->getPerson() = *person;
	}
}
