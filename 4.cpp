#include <iostream>
using namespace std;

void check_equal() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << (a == b ? "Numbers are equal" : "Numbers are not equal") << endl;
}

int main() {
    check_equal();
    return 0;
}

