#include <iostream>
#include <cmath>
using namespace std;

void round_float() {
    double num;
    cout << "Enter a floating number: ";
    cin >> num;
    cout << "Floor: " << floor(num) << endl;
    cout << "Ceil: " << ceil(num) << endl;
}

int main() {
    round_float();
    return 0;
}

