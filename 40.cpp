#include <iostream>
using namespace std;
int secondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    return second;
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
    int result = secondLargest(arr, n);
    if (result == INT_MIN) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "Second largest element: " << result << endl;
    }
    return 0;
}

