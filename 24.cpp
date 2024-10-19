#include <iostream>
using namespace std;
bool isHarshad(int num) {
    int sum = 0, temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isHarshad(num) ? "Harshad Number" : "Not a Harshad Number") << endl;
    return 0;
}

