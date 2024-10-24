#include <iostream>
using namespace std;

int power(int base, int exp) {
    return (exp == 0) ? 1 : base * power(base, exp - 1);
}

int main() {
    int base = 2, exp = 3;
    cout << "Power: " << power(base, exp);
    return 0;
}
