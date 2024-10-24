#include <iostream>
using namespace std;

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
