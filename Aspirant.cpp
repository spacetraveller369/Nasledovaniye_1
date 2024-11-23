#include "Aspirant.h"

Aspirant::Aspirant() : Student() {
    SetTopicPhd("Unknown");
}

Aspirant::Aspirant(string name, unsigned int age, string city, string university, string group, double rating, bool is_studying, bool is_contract, string topicphd) : Student(name, age, city, university, group, rating, is_studying, is_contract) {
    SetTopicPhd(topicphd);
}


void Aspirant::SetTopicPhd(string topicphd) {
    this->topicphd = topicphd;
}

string Aspirant::GetTopicPhd() const { return topicphd; }

void Aspirant::DisplayAspirantInfo() {

    cout << "Aspirant's info:\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "City: " << city << "\n";
    cout << "University: " << university << "\n";
    cout << "Group: " << group << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Is studing: " << (is_studying ? "yes\n" : "no\n");
    cout << "Is on contract: " << (is_contract ? "yes\n" : "no\n");
    cout << "Topic PhD: " << topicphd << "\n";
}