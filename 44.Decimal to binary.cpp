#include <iostream>
using namespace std;

string decimalToBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary == "" ? "0" : binary;
}

int main() {
    int num = 10;
    cout << "Binary representation of " << num << " is: " << decimalToBinary(num) << endl;
    return 0;
}
