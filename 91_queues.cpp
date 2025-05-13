#include <iostream>
#include <queue>

using namespace std;

queue<string> cars;

int main () {
    cars.push("Volvo");
    cars.push("Ford");
    cars.push("BMW");
    cars.push("Mazda");
    cars.front() = "Tesla";
    cars.back() = "VW";
    cars.pop();

    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.size() << endl;
    cout << cars.empty() << endl;
    return 0;
}