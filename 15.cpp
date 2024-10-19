#include <iostream>
using namespace std;

void factorial() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial: " << fact << endl;
}

int main() {
    factorial();
    return 0;
}

