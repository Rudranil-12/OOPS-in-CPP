#include<iostream>
using namespace std;

class Student{ // Student is a new data type
public:
    string name;
    int roll;
    float cgpa;
};

class Car{ 
public:
    string name;
    int price;
    int seats;
    string type;
};

int main()
{
    Student s1;
    s1.name = "Rudranil";
    s1.roll = 24;
    s1.cgpa = 7.55;

    cout << s1.name << " " << s1.roll << " " << s1.cgpa << endl;

    Car c1; 
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type = "sedan";

    cout << c1.name << " " << c1.price << " " << c1.seats << " " << c1.type << endl;

    return 0;
}
