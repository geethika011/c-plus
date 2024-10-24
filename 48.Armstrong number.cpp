#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, n = 0;
    while (original > 0) {
        original /= 10;
        n++;
    }
    original = num;
    while (original > 0) {
        int digit = original % 10;
        sum += pow(digit, n);
        original /= 10;
    }
    return sum == num;
}

int main() {
    int num = 153;
    cout << (isArmstrong(num) ? "It is an Armstrong number." : "It is not an Armstrong number.") << endl;
    return 0;
}
