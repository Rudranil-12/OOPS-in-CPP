#include<iostream>
#include<string>

using namespace std;

class student {
    public:
        string name;
        float sgpa;
        string dept;

        student(string n, float sg, string dep) {
            name = n;
            sgpa = sg;
            dept = dep;
        }
        student(student &ref){
            name = ref.name;
            sgpa = ref.sgpa;
            dept = ref.dept;
        }
    void getinfo() {
        cout<< "Name : " << name << endl;
        cout<< "SGPA : "<< sgpa << endl;
        cout<< "Dept : " << dept<< endl;
    }
};
int main()
{
    student s1("Rudranil", 6.5, "CSBS");
    s1.getinfo();

    student s2(s1);
    s2.getinfo();    
    return 0;
}
