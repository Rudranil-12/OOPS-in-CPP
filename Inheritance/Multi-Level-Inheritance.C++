#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Student : public Person {
    public: 
        int rollno;

};

class GraduateStudent : public Student {
    public: 
        string researchArea;
};


int main()
{
    GraduateStudent s1;
    s1.name = "Rudranil Mallick" ;
    s1.rollno = 19;
    s1.researchArea = "Physics";

    cout<< s1.name << endl;
    cout<< s1.rollno << endl;
    cout<< s1.researchArea << endl;
     
    return 0;
}
