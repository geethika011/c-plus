#include <iostream>
using namespace std;

int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) sum += i;
    }
    return sum;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (sumOfDivisors(num1) == num2 && sumOfDivisors(num2) == num1) 
        cout << "Friendly Pair\n";
    else 
        cout << "Not a Friendly Pair\n";
    return 0;
}
