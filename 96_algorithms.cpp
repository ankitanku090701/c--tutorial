#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    vector<int> numbers = {1, 7, 3, 5, 9, 2};
    vector<int> copiedNumbers(6);
    sort(cars.begin(), cars.end());
    // sort(cars.rbegin(), cars.rend());
    sort(numbers.begin() + 2, numbers.end());
    sort(numbers.begin(), numbers.end());
    copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

    // for (string car : cars) {
    //     cout << car << endl;
    // }

    // auto it = find(numbers.begin(), numbers.end(), 3);

    // auto it = upper_bound(numbers.begin(), numbers.end(), 5);

    // auto it = min_element(numbers.begin(), numbers.end());
    auto it = max_element(numbers.begin(), numbers.end());
    fill(numbers.begin(), numbers.end(), 35);

    // for (int copyNumber : numbers) {
    //     cout << copyNumber << endl;
    // }

    // cout << *it << endl;
    return 0;
}