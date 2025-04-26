#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    
    Student() {
        dept = "CSBS"; // Setting the value for all the students using constructor method
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

    cout<< s.name<< " "<< s.dept<< " " << s.subject<< endl;
    cout<< s.dept; //Not declare the dept but using constructor we caan print it

    return 0;
}
