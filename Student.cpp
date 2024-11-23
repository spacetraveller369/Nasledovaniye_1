#include "Student.h"

Student::Student() : Person() {
    SetUniversity("Unknown");
    SetGroup("0");
    SetRating(0);
    SetIsStudying(false);
    SetIsContract(true);
}

Student::Student(string name, unsigned int age, string city, string university, string group, double rating, bool is_studying, bool is_contract) : Person(name, age, city) {
    SetUniversity(university);
    SetGroup(group);
    SetRating(rating);
    SetIsStudying(is_studying);
    SetIsContract(is_contract);
}

void Student::SetUniversity(string university) {
    this->university = university;
}

void Student::SetGroup(string group) {
    this->group = group;
}

void Student::SetRating(double rating) {
    this->rating = rating;
}

void Student::SetIsStudying(bool is_studying) {
    this->is_studying = is_studying;
}

void Student::SetIsContract(bool is_contract) {
    this->is_contract = is_contract;
}

string Student::GetUniversity() const { return university; }
string Student::GetGroup() const { return group; }
double Student::GetRating() const { return rating; }
bool Student::GetIsStudying() const { return is_studying; }
bool Student::GetIsContract() const { return is_contract; }


void Student::DisplayStudentInfo() {

    cout << "Student's info:\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "City: " << city << "\n";
    cout << "University: " << university << "\n";
    cout << "Group: " << group << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Is studing: " << (is_studying ? "yes\n" : "no\n");
    cout << "Is contract: " << (is_contract ? "yes\n" : "no\n");
}
