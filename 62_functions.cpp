#include <iostream>

using namespace std;

void func () {
    cout << "hello" << endl;
}

void func2 ();

int main () {
    func();
    func();
    func();
    func2();
    return 0;
}

void func2 () {
    cout << "world" << endl;
}