#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream sampleFile("test.txt");
    sampleFile << "Files can be tricky, but it is fun enough!" << endl;
    sampleFile.close();

    string txt;
    ifstream readSampleFile("test.txt");

    while (getline (readSampleFile, txt)) {
        cout << txt << endl;
    }

    readSampleFile.close();
    return 0;
}