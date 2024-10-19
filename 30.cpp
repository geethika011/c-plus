#include <iostream>
#include <cmath>
using namespace std;
bool isNarcissistic(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isNarcissistic(num) ? "Narcissistic Number" : "Not a Narcissistic Number") << endl;
    return 0;
}

