#include<iostream>
#include<string>
using namespace std;
class car{
    public:

    car(){
        cout<< "Hi, i am an constructor \n"; //Initializing the constructor
    }

        string name;
        int speed;
        int seat;
        string type;
};
int main()
{
    car c; //Calling the constructor
    car c2; //Calling the constructor one more time
    c.name = "Kia";
    c.speed = 85;
    c.seat = 5;
    c.type = "SUV";

    cout<< c.name<< " "<< c.speed<< " "<< c.seat<< " "<< c.type<< endl;
    return 0;
}
