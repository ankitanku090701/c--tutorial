#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    srand(time(0));
    int randomNum = rand() % 6;
    cout << randomNum << endl;
    return 0;
}