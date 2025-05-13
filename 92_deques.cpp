#include <iostream> 
#include <queue>

using namespace std;

deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

int main () {
    // for (string car : cars) {
    //     cout << car << "\n";
    // }
    cars[0] = "Opel";
    cars.at(1) = "Opel";
    cars.push_front("Tesla");
    cars.push_back("VW");
    cars.pop_front();
    cars.pop_back();

    // cout << cars.size() << endl;
    // cout << cars.empty() << endl;
    // cout << cars[3] << endl;
    // cout << cars.front() << endl;
    // cout << cars.back() << endl;
    // cout << cars.at(3) << endl;

    // for (int i = 0; i < cars.size(); i++)
    // {
    //     cout << cars[i] << endl;
    // }

    for (string car : cars) {
        cout << car << endl;
    }
    
    return 0;
}