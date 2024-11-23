#include "Person.h"

Person::Person(string name, unsigned int age, string city) {
	SetName(name);
	SetAge(age);
	SetCity(city);
}

Person::Person() {
	cout << "base constructor\n";
	SetName("Unknown");
	SetAge(1);
	SetCity("Unknown");
}

void Person::SetName(string name) {
     this->name = name;
}

void Person::SetAge(unsigned int age) {
	if (age < 18 && age > 80) {
		cout << "Error! Wrong age.\n";
	}
	this->age = age;
}

void Person::SetCity(string city) {
	this->city = city;
}

string Person::GetName() const { return name; }
unsigned int Person::GetAge() const { return age; }
string Person::GetCity() const { return city; }

void Person::DisplayPersonInfo() {

	cout << "Person's Info:\n";
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << "\n";
	cout << "City: " << city << "\n";

}
