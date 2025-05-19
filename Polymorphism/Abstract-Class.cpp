#include<iostream>
using namespace std;

class Shape { //Abstract Class
    virtual void Draw() = 0; //Pure virtual function
};

class Circle {
    public:
        void Draw() {
            cout<< "Drawing a circle \n";
        }
};

int main() {
    Circle c1;
    c1.Draw()

    return 0;
}