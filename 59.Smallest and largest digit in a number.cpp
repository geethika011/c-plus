#include <iostream>
using namespace std;

void findSmallestLargestDigit(int n, int &smallest, int &largest) {
    smallest = 9, largest = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit < smallest) smallest = digit;
        if (digit > largest) largest = digit;
        n /= 10;
    }
}

int main() {
    int n, smallest, largest;
    cout << "Enter a number: ";
    cin >> n;
    findSmallestLargestDigit(n, smallest, largest);
    cout << "Smallest digit: " << smallest << endl;
    cout << "Largest digit: " << largest << endl;
    return 0;
}
