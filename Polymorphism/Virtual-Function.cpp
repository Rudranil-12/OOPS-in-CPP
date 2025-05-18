#include<iostream>
using namespace std;
class Parent {
    public:
        virtual void hello() {
            cout<< "Hello from parent \n";
        }
};

class Child : Parent{
    public:
        void hello() {
            cout<< "Hello from child \n";
        }
};

int main()
{
    Child c1;
    c1.hello();
    return 0;
}