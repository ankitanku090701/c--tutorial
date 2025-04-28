#include <iostream>

using namespace std;

int main () {

    // string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    // cout << cars[0] << endl;
    // // Outputs Volvo

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0] << endl;
    // Now outputs Opel instead of Volvo
    return 0;
}