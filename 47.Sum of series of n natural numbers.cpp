#include <iostream>
using namespace std;

int sumOfSeries(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n = 10;
    cout << "Sum of the first " << n << " natural numbers is: " << sumOfSeries(n) << endl;
    return 0;
}
