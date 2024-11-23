#include <iostream>
#include "Student.h"
using namespace std;

class Aspirant : public Student {
    string topicphd;
public:
   
    Aspirant();

    Aspirant(string, unsigned int, string, string, string, double, bool, bool, string);

    void SetTopicPhd(string);

    string GetTopicPhd() const;

    void DisplayAspirantInfo();
};


