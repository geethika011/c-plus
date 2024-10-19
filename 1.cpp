#include <iostream>
using namespace std;

void basic_operations() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (b != 0 ? (double)a / b : "Cannot divide by zero") << endl;
    cout << "Modulo: " << (b != 0 ? a % b : "Cannot modulo by zero") << endl;
}

int main() {
    basic_operations();
    return 0;
}

