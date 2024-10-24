#include <iostream>
using namespace std;
bool isMagic(int n) {
    int sum = 0;
    while (n > 0 || sum > 9) {
        if (n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return (sum == 1);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isMagic(num)) cout << "Magic Number\n";
    else cout << "Not a Magic Number\n";
    return 0;
}
