#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    
    Student(string n, string d,  string sub) { // Parameterized constructor method
        name = n;
        dept = d;
        subject = sub;
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
