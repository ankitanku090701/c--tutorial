#include <iostream>

using namespace std;

// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main () {

    // // Create a structure variable called myStructure
    // struct {
    //     int num;
    //     string str;
    // } stru;

    // // Assign values to members of myStructure
    // stru.num = 3000;
    // stru.str = "Hello World! 3000";

    // // Print members of myStructure
    // cout << stru.num << "\n";
    // cout << stru.str << "\n";

    // struct {
    //     string brand;
    //     string model;
    //     int year;
    // } car1, car2; // We can add variables by separating them with a comma here

    // // Put data into the first structure
    // car1.brand = "BMW";
    // car1.model = "X5";
    // car1.year = 1999;

    // // Put data into the second structure
    // car2.brand = "Ford";
    // car2.model = "Mustang";
    // car2.year = 1969;

    // // Print the structure members
    // cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    // cout << car2.brand << " " << car2.model << " " << car2.year << "\n";

    // Create a car structure and store it in myCar1;
    car car1;
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 1999;

    // Create another car structure and store it in myCar2;
    car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;
 
    // Print the structure members
    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";

    return 0;
}