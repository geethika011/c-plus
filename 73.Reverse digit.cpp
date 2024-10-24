#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: " << reverseDigits(n) << endl;
    return 0;
}
