#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return original == reverse;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n)) 
        cout << n << " is a palindrome." << endl;
    else 
        cout << n << " is not a palindrome." << endl;
    return 0;
}
