#include <iostream>
using namespace std;

void odd_or_even() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << (n % 2 == 0 ? "Even" : "Odd") << endl;
}

int main() {
    odd_or_even();
    return 0;
}

