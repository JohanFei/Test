#include"Teacher.h"
#include"Student.h"
#include<vector>
int main()
{
	vector<Person*> Persons;
	Persons.push_back(new Student("Nils", 1, 38));
	Persons.push_back(new Student("Anna", 2, 22));
	Persons.push_back(new Student("Peter", 3, 31));
	Persons.push_back(new Student("Anton", 4, 28));
	Persons.push_back(new Student("Lars", 5, 58));
	Persons.push_back(new Student("Franziska", 6, 60));
	Persons.push_back(new Student("Orvar", 7, 19));
	Persons.push_back(new Student("Nolan", 8, 55));
	Persons.push_back(new Teacher("Anders", 2, 25));
	Persons.push_back(new Teacher("Dudda", 3, 21));
	Persons.push_back(new Teacher("Per", 4, 28));
	Persons.push_back(new Teacher("Allan", 5, 72));
	for (auto *person:Persons)
	{
		cout << person->printPerson();
	}
}
