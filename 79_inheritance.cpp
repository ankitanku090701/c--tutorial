#include <iostream>

using namespace std;

class vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "pom pom" << endl;
        }
};

class car: public vehicle {
    public:
        string model = "Mustang";
};

int main () {
    car obj1;
    obj1.honk();
    cout << obj1.brand + " " + obj1.model << endl;
    return 0;
}