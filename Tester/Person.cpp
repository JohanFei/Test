#include "Person.h"

Person::Person()
{
	id = 0;
	age = 0;
	name = "Unknown";
}

Person::Person(int id, int age, string name)
{
	this->id = id;
	this->age = age;
	this->name = name;
}

int Person::getId()
{
	return id;
}

int Person::getAge()
{
	return age;
}

string Person::getName()
{
	return name;
}

string Person::printPerson()
{
	return "Name: " + name + "\nAge: "+ to_string(age) +"\n";
}
