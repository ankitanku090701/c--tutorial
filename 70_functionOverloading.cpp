#include <iostream>

using namespace std;

int a(int x, int y) {
    return x + y;
}

double a(double x, double y) {
    return x * y;
}

int main () {
    int n1 = a(8, 5);
    double n2 = a(10.0, 11.12);
    cout << n1 << " " << n2 << endl;
    return 0;
}