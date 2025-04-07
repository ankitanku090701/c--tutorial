#include <iostream>
#include <string>

using namespace std;

int main () {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    string fname = "Ankit ";
    string lname = "Prasad";
    cout << fullName << endl;
    cout << fname.append(lname) << endl;
    return 0;
}