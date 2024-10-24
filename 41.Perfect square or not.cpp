#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main() {
    int num = 25;
    cout << (isPerfectSquare(num) ? "It is a perfect square." : "It is not a perfect square.") << endl;
    return 0;
}
