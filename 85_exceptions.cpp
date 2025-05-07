#include <iostream>

using namespace std;

int main () {
    try {
        int age = 17;
        if (age >= 18) {
            cout << "Access granted!" << endl;
        } else {
            throw 404;
            // cout << "not found" << endl;
            // throw (age);
        }
    }
    catch (...) {
        cout << "Access denied!" << endl;
        // cout << "Age is: " << n << endl;
    }
    // catch (int n) {
    //     cout << "Access denied!" << endl;
    //     cout << "Age is: " << n << endl;
    // }
    return 0;
}