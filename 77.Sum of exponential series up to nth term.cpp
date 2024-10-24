#include <iostream>
#include <cmath>
using namespace std;

double sumExponentialSeries(double x, int n) {
    double sum = 1.0; // e^x starts with 1
    double term = 1.0; // First term is 1
    for (int i = 1; i <= n; i++) {
        term *= x / i; // Calculate next term
        sum += term; // Add term to sum
    }
    return sum;
}

int main() {
    double x;
    int n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Sum of exponential series: " << sumExponentialSeries(x, n) << endl;
    return 0;
}
