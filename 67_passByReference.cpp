#include <iostream>

using namespace std;

// void swap (int &x, int &y) {
//     int z = x;
//     x = y;
//     y = z;
// }

void mod(string &str) {
    str += " World";
}

int main () {
    // int fno = 10;
    // int sno = 50;

    // cout << "before swap: " << endl;
    // cout << fno << " " << sno << endl;

    // swap (fno, sno);

    // cout << "after swap: " << endl;
    // cout << fno << " " << sno << endl;

    string greeting = "Hello";
    mod(greeting);
    cout << greeting << endl;
    return 0;
}