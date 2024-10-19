#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    for (int i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        result[n1 + i] = arr2[i];
    }
}
int main() {
    int n1, n2;
    cout << "Enter number of elements in first array: ";
    cin >> n1;
    int arr1[100]; 
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter number of elements in second array: ";
    cin >> n2;
    int arr2[100]; 
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    int mergedArray[200]; 
    mergeArrays(arr1, n1, arr2, n2, mergedArray);
    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    return 0;
}

