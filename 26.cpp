#include <iostream>
using namespace std;
int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}
bool isStrong(int num) {
    int sum = 0, temp = num;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isStrong(num) ? "Strong Number" : "Not a Strong Number") << endl;
    return 0;
}

