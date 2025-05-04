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

class Teacher : public Person {
    public:
        string subject;
};


int main()
{
    Teacher t1;
    t1.name = "Rudranil Mallick" ;
    t1.subject = "DSA";
    
    cout<< t1.name << endl;
    cout<< t1.subject << endl;


    Student s1;
    s1.name = "RONI MALLICK";
    s1.age = 20;
     
    cout<< s1.name << endl;
    cout<< s1.age << endl;
    
    return 0;
}
