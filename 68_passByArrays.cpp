#include <iostream>

using namespace std;

void fun (int a[5]) {
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
}

int main () {
    int arr[5] = {10, 15, 20, 25, 30};
    fun(arr);
    return 0;
}