#include <iostream>

using namespace std;

class animal {
    public:
        void animalSound () {
            cout << "animal sound, something something" << endl;
        }
};

class pig : public animal {
    public:
        void animalSound () {
            cout << "The pig says, wee wee" << endl;
        }
};

class dog : public animal {
    public:
        void animalSound () {
            cout << "The dog says, bow bow" << endl;
        }
};

int main () {
    animal animal1;
    pig pig1;
    dog dog1;
    animal1.animalSound();
    pig1.animalSound();
    dog1.animalSound();
    return 0;
}