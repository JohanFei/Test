#include "Student.h"

Student::Student(string name, int id, int age)
{
	this->age = age;
	this->id = id;
	this->name = name;
}

int Student::getId()
{
	return id;
}

int Student::getAge()
{
	return age;
}

string Student::getName()
{
	return name;
}

string Student::printPerson()
{
	return "---------------------------\n         STUDENT\n---------------------------\n" + Person::printPerson();
}

void Student::addPerson(Person* person)
{
	if (!Teacher) {
		Teacher = person;
	}
	else {
		Person* curr = Teacher;
		while (curr->getPerson())
			curr = curr->getPerson();
		curr->setPerson(person);
	}
}

void Student::setPerson(Person* person)
{
	this->Teacher = person;
}
