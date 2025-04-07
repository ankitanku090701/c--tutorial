#include <iostream>
#include <string> 

using namespace std;

int main () {
    string fname;
    cout << "Type your first name: ";
    // cin >> fname;
    getline(cin, fname);
    cout << "Your name is: " << fname << endl;
    return 0;
}