
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person {
protected:
    string university;
    string group;
    double rating;
    bool is_studying;
    bool is_contract;

public:
    
    Student();
    Student(string, unsigned int, string, string, string, double, bool, bool);

   
    void SetUniversity(string);
    void SetGroup(string);
    void SetRating(double);
    void SetIsStudying(bool);
    void SetIsContract(bool);

   
    string GetUniversity() const;
    string GetGroup() const;
    double GetRating() const;
    bool GetIsStudying() const;
    bool GetIsContract() const;


    void DisplayStudentInfo();
};

