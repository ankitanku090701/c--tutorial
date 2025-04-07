#include <iostream>

using namespace std;

int main () {
    // int time = 20;
    // if (time < 18) {
    //     cout << "Good day.\n";
    // } else {
    //     cout << "Good evening.\n";
    // }

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;
    return 0;
}