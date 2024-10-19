#include <iostream>
using namespace std;
bool isNeon(int num) {
    int sum = 0;
    int square = num * num;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isNeon(num) ? "Neon Number" : "Not a Neon Number") << endl;
    return 0;
}

