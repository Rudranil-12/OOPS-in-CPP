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

        void getinfo(){
            cout<< "Name : "<< name<< endl;
            cout<< "Department : "<< dept<< endl;
        
        }
};


int main()
{
    Teacher t1("Rudra", "CSBS", 120000);
    
    Teacher t2(t1);
    t2.getinfo();
    return 0;
}
