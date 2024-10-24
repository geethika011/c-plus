#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v) : value(v) {}
    int operator^(const Number& other) {
        return value ^ other.value;
    }
};

int main() {
    Number n1(5), n2(3);
    cout << "XOR result: " << (n1 ^ n2) << endl;
    return 0;
}
