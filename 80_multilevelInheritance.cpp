#include <iostream>

using namespace std;

class a {
    public:
        void func() {
            cout << "Hello" << endl;
        }
};

class b: public a {
};

class c: public b {
};

int main () {
    c obj1;
    obj1.func();
    return 0;
}