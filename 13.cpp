#include <iostream>
using namespace std;

void divisible_by_three() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << (n % 3 == 0 ? "Divisible by 3" : "Not divisible by 3") << endl;
}

int main() {
    divisible_by_three();
    return 0;
}

