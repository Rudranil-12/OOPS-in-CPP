#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
        string name;
        string dept;
        float salary;

        Teacher(string n, string d, float s){
            name = n;
            dept = d;
            salary = s;
        }

        Teacher(Teacher &ref){ //Initiliazing the copy constructor by the user.
            name = ref.name;
            dept = ref.dept;
            salary = ref.salary;
        }

        void getinfo(){
            cout<< "Name : "<< name<< endl;
            cout<< "Department : "<< dept<< endl;
        }
};


int main()
{
    Teacher t1("Rudra", "CSBS", 120000);
    
    Teacher t2(t1);
    Teacher t3(t2);

    t2.getinfo();
    t3.getinfo();
    return 0;
}
