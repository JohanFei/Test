#pragma once

#include <iostream>
#include<string>
using namespace std;
class Person
{
protected:
	int id;
	int age;
	string name;
public:
	virtual Person* getPerson();
	Person();
	Person(int id, int age, string name);
	virtual int getId();
	virtual int getAge();
	virtual string getName();
	virtual string printPerson();
	virtual void addPerson(Person * person);
	virtual void setPerson(Person* person);
};

