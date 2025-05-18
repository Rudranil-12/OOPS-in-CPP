#include<iostream>
using namespace std;

class Student{
    public:  
        string name;
        Student() {
            cout<< "Non parameterized\n";
        }

        Student (string name) {
            this->name = name;
            cout<< "Parameterized\n";
        }
};
int main()
{
    Student s1("Roni mallick");
    return 0;
}