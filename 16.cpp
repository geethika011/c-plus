#include <iostream>
using namespace std;

void multiplication_table() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main() {
    multiplication_table();
    return 0;
}

