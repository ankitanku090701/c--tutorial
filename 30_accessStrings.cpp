#include <iostream>
#include <string>

using namespace std;

int main () {
    string myString = "Hello";
    cout << myString[0] << endl;
    cout << myString[1] << endl;
    myString[0] = 'A';
    cout << myString.at(0) << endl;
    cout << myString << endl;
    cout << myString[myString.length() - 1] << endl;
    return 0;
}