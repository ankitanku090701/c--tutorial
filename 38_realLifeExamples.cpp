#include <iostream>

using namespace std;

int main () {
    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge) << endl; // returns 1 (true), meaning 25 year olds are allowed to vote!
    if (myAge >= votingAge) {
    cout << "Old enough to vote!\n";
    } else {
    cout << "Not old enough to vote.\n";
    }

    return 0;
}