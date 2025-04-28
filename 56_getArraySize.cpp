#include <iostream>

using namespace std;

int main () {
    // int arr[5] = {10, 20, 30, 40, 50};
    // cout << sizeof(arr) << endl;

    // int num[5] = {10, 20, 30, 40, 50};
    // int getArrayLength = sizeof(num) / sizeof(num[0]);
    // cout << getArrayLength << endl;
    // return 0;

    // int num[5] = {10, 20, 30, 40, 50};
    // for (int i = 0; i < 5; i++) {
    //     cout << num[i] << "\n";
    // }

    // int num[5] = {10, 20, 30, 40, 50};
    // for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
    //     cout << num[i] << "\n";
    // }

    int num[5] = {10, 20, 30, 40, 50};
    for (int i : num) {
        cout << i << "\n";
    }
}