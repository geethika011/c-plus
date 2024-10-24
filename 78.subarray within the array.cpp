#include <iostream>
using namespace std;

bool findSubarrayWithSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += arr[j];
            if (currentSum == target) {
                cout << "Subarray found from index " << i << " to " << j << endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the target sum: ";
    cin >> target;
    if (!findSubarrayWithSum(arr, n, target))
        cout << "No subarray with given sum found." << endl;
    return 0;
}
