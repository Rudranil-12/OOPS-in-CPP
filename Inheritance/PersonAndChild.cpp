#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    void display() {
        cout << "Parent Class....\n";
    }
};

class Student : public Person {
public:
    void show() {
        cout << "Child Class...\n";
    }
};

int main() {
    Person p;
    p.display();

    Student s;
    s.show();

    return 0;
}
