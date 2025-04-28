#include <iostream>

using namespace std;

int main () {

    // // Create an array of strings
    // string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    // // Loop through strings
    // for (int i = 0; i < 5; i++) {
    //     cout << cars[i] << "\n";
    // }

    // string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    // for (int i = 0; i < 5; i++) {
    //     cout << i << " = " << cars[i] << "\n";
    // }

    // int myNumbers[5] = {10, 20, 30, 40, 50};
    // for (int i = 0; i < 5; i++) {
    //     cout << myNumbers[i] << "\n";
    // }

    // // Create an array of integers
    // int myNumbers[5] = {10, 20, 30, 40, 50};

    // // Loop through integers
    // for (int i : myNumbers) {
    //     cout << i << "\n";
    // }

    // Create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    // Loop through strings
    for (string s : cars) {
        cout << s << "\n";
    }

    return 0;
}