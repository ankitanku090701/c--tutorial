#include <iostream>

using namespace std;

float toCelsius (float fahrenheit) {
    return ( 5.0 / 9.0 ) * (fahrenheit - 32.0 );
}

int main () {
    float f = 98.8;
    float result = toCelsius(f);

    cout << "Fahrenheit: " << f << endl;
    cout << "Converted to Celsius: " << result << endl;
}