#include <iostream>
#include <cmath>
using namespace std;

int hexToDec(string hex) {
    int len = hex.length(), base = 1, dec = 0;
    for (int i = len - 1; i >= 0; --i) {
        if (hex[i] >= '0' && hex[i] <= '9')
            dec += (hex[i] - '0') * base;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            dec += (hex[i] - 'A' + 10) * base;
        base *= 16;
    }
    return dec;
}

int main() {
    string hex = "1A3";
    cout << "Decimal: " << hexToDec(hex);
    return 0;
}
