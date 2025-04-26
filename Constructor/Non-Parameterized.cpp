#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    
    Student() {
        dept = "CSBS"; // Non Parameterized constructor method
    }

    string name;
    string dept;
    string subject;
};


int main()
{
    Student s;
    s.name = "Rudranil";
    s.subject = "OOPS";

    cout<< s.dept;

    return 0;
}
