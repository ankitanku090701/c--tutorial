#include <iostream>

using namespace std;

// enum Level {
//   LOW = 25,
//   MEDIUM = 50,
//   HIGH = 75
// };

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main () {
    // enum Level a = MEDIUM;
    // enum Level b = HIGH;
    // enum Level c = LOW;
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    enum Level z = MEDIUM;

    switch (z) {
        case 1:
            cout << "Low Level" << endl;
            break;
        case 2:
            cout << "Medium level" << endl;
            break;
        case 3:
            cout << "High level" << endl;
            break;
    }

    return 0;
}