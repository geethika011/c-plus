#include <iostream>
using namespace std;
double averageArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; 
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Average of elements: " << averageArray(arr, n) << endl;
    return 0;
}

