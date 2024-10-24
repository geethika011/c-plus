#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of squares: " << sumOfSquares(n) << endl;
    return 0;
}
