#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return false;
    if (i * i > n) return true;
    return isPrime(n, i + 1);
}

int main() {
    int n = 17;
    cout << (isPrime(n) ? "Prime" : "Not Prime");
    return 0;
}
