#include <iostream>

using namespace std;

int x = 10;

void fun () {
    int x = 5;
    cout << ++x << endl;
}

int main () {
    fun();
    cout << x << endl;
    return 0;
}