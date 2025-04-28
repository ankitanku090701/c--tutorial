#include <iostream>

using namespace std;

int func(int x) {
    return 5 + x;
}

int func2 (int a, int b) {
    return a + b;
}

int main () {
    cout << func(100) << endl;
    cout << func2(5, 105) << endl;
    int z = func2(10, 55);
    cout << z << endl;
    return 0;
}