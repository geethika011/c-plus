#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int minimum = (a < b) ? a : b;
    cout << "Minimum of the two numbers: " << minimum << endl;
    return 0;
}
