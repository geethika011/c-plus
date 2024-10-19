#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isPerfect(num) ? "Perfect Number" : "Not a Perfect Number") << endl;
    return 0;
}

