#include<iostream>
using namespace std;
class Parent {
    public:
        void getInfo() {
            cout<< "Parent class \n";
        }
};

class Child : Parent{
    public:
        void getInfo() {
            cout<< "Child class \n";
        }
};

int main()
{
    Parent p1;
    p1.getInfo();

    Child c1;
    c1.getInfo();

    return 0;
}