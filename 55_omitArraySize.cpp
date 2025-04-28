#include <iostream>
#include <vector>

using namespace std;

int main () {

    string cars[5];
    cars[1] = "BMW";
    cars[0] = "Volvo";
    cars[3] = "Mazda";
    cars[2] = "Ford";
    cars[4] = "Tesla";

    // A vector with 3 elements
    vector<string> car = {"Volvo", "BMW", "Ford"};

    // Adding another element to the vector
    car.push_back("Tesla");
    return 0;
}