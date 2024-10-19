#include <iostream>
using namespace std;

void greater_number() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << (a > b ? "First number is greater" : (b > a ? "Second number is greater" : "Both are equal")) << endl;
}

int main() {
    greater_number();
    return 0;
}

