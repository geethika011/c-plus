#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << endl;
    return 0;
}
