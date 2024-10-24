#include <iostream>
using namespace std;

bool isAutomorphic(int num) {
    int square = num * num;
    while (num > 0) {
        if (num % 10 != square % 10)
            return false;
        num /= 10;
        square /= 10;
    }
    return true;
}

int main() {
    int number = 76;
    if (isAutomorphic(number))
        cout << number << " is an Automorphic Number.";
    else
        cout << number << " is not an Automorphic Number.";
    return 0;
}
