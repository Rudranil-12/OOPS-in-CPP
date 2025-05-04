#include<iostream>
#include<string>
using namespace std;

class Student {
    public: 
        string name;
        int rollno;
};

class Teacher {
    public:
        string subject;
        double salary;
};


class TA : public Student, public Teacher {
    public: 
        string researchArea;
};


int main()
{
    TA t1;
    t1.name = "Rudranil Mallick" ;
    t1.salary = 50000;
    t1.researchArea = "Physics";

    cout<< t1.name << endl;
    cout<< t1.salary << endl;
    cout<< t1.researchArea << endl;
     
    return 0;
}
