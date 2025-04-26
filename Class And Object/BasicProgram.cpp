#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    //Propertis / Attribute
    string name;
    string dept;
    string subject;
    double salary;

    //Methods / Member function
    void changeDept(string newDept) {
        dept = newDept;  
    }
};
int main()
{
    Teacher t1;
    t1.name = "Rudranil";
    t1.dept = "CSBS";
    t1.subject = "OOPS";
    t1.salary = 100000;

    cout<< t1.name<< " "<< t1.dept<< " " << t1.subject<< " "<< t1.salary<< endl;
    return 0;
}