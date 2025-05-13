#include <iostream>
#include <set>

using namespace std;

set<string> cars = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};
set<int> num = {1, 7, 3, 2, 5, 9};
set<int, greater<int>> num2 = {1, 7, 3, 2, 5, 9};

int main () {
    cars.insert("Tesla");
    cars.insert("Toyota");
    cars.insert("VW");
    cars.insert("Audi");

    cout << cars.size() << endl;
    cout << cars.empty() << endl;

    cars.erase("Volvo");
    cars.erase("Mazda");

    // cars.clear();

    for (string car : cars)
    {
        cout << car << endl;
    }

    // for (int n : num) {
    //     cout << n << endl;
    // }

    // for (int n : num2) {
    //     cout << n << endl;
    // }
    
    return 0;
}