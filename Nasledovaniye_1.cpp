#include <iostream>
#include "string"
#include "Person.h"
#include "Student.h"
#include "Aspirant.h"

int main()
{
    string name, UserAnswer;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "You are student or aspirant? \n";
    getline(cin, UserAnswer);

    if (UserAnswer == "student") {
        Student s(name, 31, "Odessa", "ONMU", "FVTSHS-1", 70, false, false);
        s.DisplayStudentInfo();
    }
    else if (UserAnswer == "aspirant") {
        cout << "Enter PhD topic: \n";

        string topic;
        getline(cin, topic);

        Aspirant a(name, 31, "Odessa", "ONMU", "FVTSHS-1", 70, false, false, topic);
        a.DisplayAspirantInfo();
    }
    else {
        cout << "Error! Try again...\n";
    }

    return 0;
}