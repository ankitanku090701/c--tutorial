#include <iostream>

using namespace std;

void func (string country = "India") {
    cout << country << endl;
}

int main () {
    func("US");
    func();
    return 0;
}