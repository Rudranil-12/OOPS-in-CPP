#include<iostream>
using namespace std;
class Student {
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }
        //DESTRUCTOR
        ~Student() {
            cout<< "I delete everything\n";
        }
    void getInfo() {
        cout<< "Name : " << name<< endl;
        cout<< "CGPA : " << *cgpaPtr<< endl;
    }
};

int main()
{
    Student s1("Rudranil", 7.55);
    s1.getInfo();

    return 0;
}
