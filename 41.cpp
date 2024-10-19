#include <iostream>
using namespace std;
int countOccurrences(int arr[], int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}
int main() {
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; 
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter value to count occurrences: ";
    cin >> value;
    cout << "Number of occurrences of " << value << ": " << countOccurrences(arr, n, value) << endl;
    return 0;
}

