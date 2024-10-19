#include <iostream>
using namespace std;
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
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
    cout << "Sum of elements: " << sumArray(arr, n) << endl;
    return 0;
}

