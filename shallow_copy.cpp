#include<iostream>
using namespace std;

class Student{
    string name;
    int roll;
    public:
    Student(string name,int roll){
        this->name=name;
        this->roll=roll;
    }
    Student(Student &ref){
        cout<<"Custom copy constructor invoked!!"<<endl;
        this->name=ref.name;
        this->roll=ref.roll;
    }
    void display(){
        cout<<"Student Details:"<<endl;
        cout<<"Name:"<<this->name<<' '<<"Roll:"<<this->roll<<endl;
    }
};

int main(){
    Student s1("Priya",19);
    Student s2=s1;
    s2.display();

    return 0;
}