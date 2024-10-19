#include <iostream>
using namespace std;

void largest_of_three() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << "Largest: " << largest << endl;
}

int main() {
    largest_of_three();
    return 0;
}

