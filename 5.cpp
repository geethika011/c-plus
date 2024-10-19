#include <iostream>
using namespace std;

void floating_operations() {
    double a, b;
    cout << "Enter first floating number: ";
    cin >> a;
    cout << "Enter second floating number: ";
    cin >> b;
    
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (b != 0 ? a / b : "Cannot divide by zero") << endl;
    cout << "Modulo: " << (b != 0 ? fmod(a, b) : "Cannot modulo by zero") << endl;
}

int main() {
    floating_operations();
    return 0;
}

