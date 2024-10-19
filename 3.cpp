#include <iostream>
using namespace std;

void average_of_three() {
    int nums[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> nums[i];
    }
    double average = (nums[0] + nums[1] + nums[2]) / 3.0;
    cout << "Average: " << average << endl;
}

int main() {
    average_of_three();
    return 0;
}

