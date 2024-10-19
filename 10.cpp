#include <iostream>
using namespace std;

void swap_using_xor() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
}

int main() {
    swap_using_xor();
    return 0;
}

