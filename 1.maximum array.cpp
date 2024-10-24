#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 7, 9};
    int max = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    cout << "Maximum: " << max;
    return 0;
}
