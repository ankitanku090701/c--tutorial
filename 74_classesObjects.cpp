#include <iostream>

using namespace std;

class a {
    public: 
        int x;
        string y;
};

class car {
    public:
        string brand;
        string model;
        int year;
};

int main () {

    a obj1;
    obj1.x = 10;
    obj1.y = "Hello";

    car carobj1;
    carobj1.brand = "BMW";
    carobj1.model = "X5";
    carobj1.year = 1999;

    car carobj2;
    carobj2.brand = "Ford";
    carobj2.model = "Mustang";
    carobj2.year = 1969;
    
    cout << obj1.x << endl;
    cout << obj1.y << endl;

    cout  << carobj1.brand << " " << carobj1.model << " " << carobj1.year << endl;
    cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year << endl; 

    return 0;
}