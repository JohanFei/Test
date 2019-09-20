#include "Teacher.h"

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
