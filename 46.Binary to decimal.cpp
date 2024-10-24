#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    string binary = "1010";
    cout << "Decimal representation of " << binary << " is: " << binaryToDecimal(binary) << endl;
    return 0;
}
