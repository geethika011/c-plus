#include <iostream>
using namespace std;
bool isBuzz(int num) {
    return (num % 7 == 0 || num % 10 == 7);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isBuzz(num) ? "Buzz Number" : "Not a Buzz Number") << endl;
    return 0;
}

