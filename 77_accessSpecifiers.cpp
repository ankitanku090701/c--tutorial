#include <iostream>

using namespace std;

class a {
    public:
        int x;
    private:
        int y;
    int z;
};

int main () {
    a obj1;
    obj1.x = 25;
    // obj1.y = 50; not allowed
    return 0;
}