#include <iostream>
using namespace std;
void deleteElement(int arr[], int &n, int position) {
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    n--; 
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
    int position;
    cout << "Enter the position to delete (0 to " << n - 1 << "): ";
    cin >> position;
    deleteElement(arr, n, position);
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

