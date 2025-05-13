#include <iostream>
#include <map>

using namespace std;

map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

map<string, int, greater<string>> peoples = { {"a", 32}, {"b", 45}, {"c", 29} };

int main () {
    cout << "John is: " << people["John"] << "\n";
    cout << "Adele is: " << people.at("Adele") << "\n";
    people["John"] = 50;
    cout << "John is: " << people["John"] << endl;
    people.at("John") = 500;
    cout << "John is: " << people.at("John") << endl;

    // people["Jenny"] = 22;
    // people["Kasper"] = 20;
    // people["Liam"] = 24;
    // people["Anja"] = 30;

    people.insert({"Jenny", 22});
    // people.insert({"Jenny", 32});
    people.insert({"Kasper", 20});
    people.insert({"Liam", 24});
    people.insert({"Anja", 30});

    // people.erase("John");

    // people.clear();

    cout << "Jenny is: " << people.at("Jenny") << endl;
    cout << people.size() << endl;
    cout << people.empty() << endl;
    cout << people.count("John") << endl;

    for (auto person : people) {
        cout << person.first << " is: " << person.second << "\n";
    }

    for (auto z : peoples) {
        cout << z.first << " is: " << z.second << "\n";
      }
    return 0;
}