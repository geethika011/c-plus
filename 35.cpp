#include <iostream>
using namespace std;
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    reverseArray(arr, n); 
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}

