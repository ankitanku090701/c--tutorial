#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

vector<string> c = {"Volve", "BMW", "Ford", "Mazda"};
// vector<string>::iterator it;
// auto it = c.begin();

list<string> ca = {"Volvo", "BMW", "Ford", "Mazda"};

deque<string> caa = {"Volvo", "BMW", "Ford", "Mazda"};

set<string> caaa = {"Volvo", "BMW", "Ford", "Mazda"};

map<string, int> p = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

vector<int> n = {1, 7, 3, 5, 9, 2};

int main () {
    // for (auto it = c.begin(); it != c.end(); ++it) {
    //     cout << *it << "\n";
    // }

    // for (string car : c) {
    //     cout << car << "\n";
    // }

    // for (auto it = c.begin(); it != c.end(); ) {
    //     if (*it == "BMW") {
    //       it = c.erase(it); // Remove the BMW element
    //     } else {
    //       ++it;
    //     }
    // }

    // for (auto it = c.rbegin(); it != c.rend(); ++it) {
    //     cout << *it << "\n";
    // }

    // for (string car : c) {
    //     cout << car << "\n";
    // }

    // for (auto it = ca.begin(); it != ca.end(); ++it) {
    //     cout << *it << "\n";
    // }

    // for (auto it = caa.begin(); it != caa.end(); ++it) {
    //     cout << *it << "\n";
    // }

    // for (auto it = caaa.begin(); it != caaa.end(); ++it) {
    //     cout << *it << "\n";
    // }

    // for (auto it = p.begin(); it != p.end(); ++it) {
    //     cout << it->first << " is: " << it->second << "\n";
    // }

    // sort(c.begin(), c.end());

    // for (string car : c) {
    //     cout << car << endl;
    // }
    
    // sort(n.begin(), n.end());

    sort(n.rbegin(), n.rend());

    for (int num : n) {
        cout << num << "\n";
    }

    return 0;
}