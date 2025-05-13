#include <iostream>
#include <vector>

using namespace std;

vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

int main () {
    // for (string car : cars) {
    //     cout << car << endl;
    // }

    // cout << "===" << endl;

    // cout << cars[1] << endl;
    // cout << cars.front() << endl;
    // cout << cars.back() << endl;
    // cout << cars.at(2) << endl;

    // cout << "===" << endl;
    cars[0] = "Opel";

    cars.push_back("Tesla");
    cars.push_back("Mitsubishi");
    cars.push_back("VW");
    cars.push_back("Mini");

    cars.pop_back();

    // cout << cars.at(6) << endl;

    // cout << cars.size() << endl;

    // cout << cars.empty() << endl;

    // for(int i = 0; i < cars.size(); i++) {
    //     cout << cars[i] << endl;
    // }

    for(string car: cars) {
        cout << car << endl;
    }

    return 0;
}