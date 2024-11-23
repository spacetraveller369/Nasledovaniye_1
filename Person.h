
#include <iostream>
using namespace std;

class Person {

protected:
	string name;
	unsigned int age;
	string city;

public:
	Person(string, unsigned int, string);
	Person();

	void SetName(string);
	void SetAge(unsigned int age);
	void SetCity(string city);

	string GetName() const;
	unsigned int GetAge() const;
	string GetCity() const;

	void DisplayPersonInfo();

};
