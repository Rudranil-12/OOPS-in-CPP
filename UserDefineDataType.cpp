#include<iostream>
using namespace std;
class Student{ // Student is a new data type
public:
    string name;
    int roll;
    float cgpa;
};
int main()
{
    Student s1;
    s1.name = "Rudranil";
    s1.roll = 24;
    s1.cgpa = 7.55;

    Student s2;
    s2.name = "RONI";
    s2.roll = 19;
    s2.cgpa = 7.98;

    cout<<s1.name<< " " << s1.roll<< " " <<s1.cgpa <<endl;
    cout<<s2.name<< " " << s2.roll<< " " <<s2.cgpa <<endl;
    return 0;
}

