#include <iostream>

using namespace std;

class a {
    public: 
        void func() {
            cout << "Hello World" << endl;
        }

        void func2();

        int speed(int x);
};

void a::func2() {
    cout << "Hello Ankit" << endl;
}

int a::speed(int x) {
    return x*100;
} 
 
int main () {
    a obj1;
    obj1.func();
    obj1.func2();
    cout << obj1.speed(5) << endl;
    return 0;
}