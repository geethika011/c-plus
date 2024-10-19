#include <iostream>
using namespace std;
void insertElement(int arr[], int &n, int element, int position) {
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[position] = element; 
    n++; 
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
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (0 to " << n << "): ";
    cin >> position;
    insertElement(arr, n, element, position);
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

