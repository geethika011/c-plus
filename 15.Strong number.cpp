#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

bool isStrongNumber(int num) {
    int sum = 0, original = num;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int number = 145;
    if (isStrongNumber(number))
        cout << number << " is a Strong Number.";
    else
        cout << number << " is not a Strong Number.";
    return 0;
}
