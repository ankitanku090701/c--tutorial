#include <iostream>
#include <stack>

using namespace std;

stack<string> cars;

int main () {
    cars.push("Volvo");
    cars.push("Ford");
    cars.push("BMW");
    cars.push("Mazda");
    cars.top() = "Tesla";
    cars.pop();

    cout << cars.top() << endl; 
    cout << cars.size() << endl;
    cout << cars.empty() << endl;
    return 0;
}