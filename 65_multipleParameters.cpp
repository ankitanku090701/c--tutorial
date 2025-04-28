#include <iostream>

using namespace std;

void func (string fname, int age = 18) {
    cout << fname << " & " << age << endl;
}

int main () {
    func ("Ankit", 24);
    func ("Ankit");
    return 0;
}