#include <iostream>
using namespace std;

bool isHarshad(int n) {
    int sum = 0, temp = n;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return (n % sum == 0);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isHarshad(n))
        cout << n << " is a Harshad number." << endl;
    else
        cout << n << " is not a Harshad number." << endl;
    return 0;
}
