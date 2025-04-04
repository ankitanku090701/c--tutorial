#include <iostream>

using namespace std;

int main () {
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)
    
    cout << sum1 << " " << sum2 << " " << sum3 << endl;
    return 0;
}