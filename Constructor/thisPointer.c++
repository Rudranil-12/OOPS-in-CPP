#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    
    Student(string name, string dept,  string subject) { // Parameterized constructor method
        this-> name = name;
        this-> dept = dept;
        this-> subject = subject;
    }

    string name;
    string dept;
    string subject;
};


int main()
{
    Student s("Rudra", "CSBS", "OOPS");

    cout << "Name: " << s.name << ", Department: " << s.dept << ", Subject: " << s.subject << endl;

    return 0;
}
