#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

double areaOfCircle(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << areaOfCircle(radius) << endl;
    return 0;
}
