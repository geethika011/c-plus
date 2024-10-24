#include <iostream>
using namespace std;

int productOfArray(int arr[], int n) {
    int product = 1;
    for (int i = 0; i < n; i++)
        product *= arr[i];
    return product;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Product of array elements: " << productOfArray(arr, n) << endl;
    return 0;
}
