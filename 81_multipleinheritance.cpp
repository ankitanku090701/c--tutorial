#include <iostream>

using namespace std;

class a {
    public:
        void func() {
            cout << "Hello" << endl;
        }
};

class b {
    public:
        void func2() {
            cout << "World" << endl;
        }
};

class c: public a, public b {
};

int main () {
    c obj1;
    obj1.func();
    obj1.func2();
    return 0;
}