#include <iostream>
#include <list>

using namespace std;

list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

int main () {
    // for (string car : cars)
    // {
    //     cout << car << endl;
    // }

    cars.front() = "Opel";
    cars.back() = "Toyota"; 

    cars.push_front("Tesla");
    cars.push_back("VW");

    cars.pop_front();
    cars.pop_back();

    // cout << cars.front() << endl;
    // cout << cars.back() << endl;

    // cout << cars.size() << endl; 
    // cout << cars.empty() << endl;

    for(string car : cars) {
        cout << car << endl;
    }
    return 0;
}