#include <iostream>
#include <unordered_set>
using namespace std;
bool isHappy(int num) {
    unordered_set<int> seen;
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isHappy(num) ? "Happy Number" : "Not a Happy Number") << endl;
    return 0;
}

