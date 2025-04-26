#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string sgpa;

    public:
    string name;
    string dept;
    string subject;

    void setSgpa(string no) {
        sgpa = no;
    }

    string getSgpa() {
        return sgpa;
    }
};


int main()
{
    Student s1;
    s1.name = "Rudranil";
    s1.dept = "CSBS";
    s1.subject = "OOPS";

    s1.setSgpa("7.55");

    cout<< s1.name<< " "<< s1.dept<< " " << s1.subject<< endl;

    cout<<s1.getSgpa();

    return 0;
}
