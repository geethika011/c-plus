#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    cout << "Enter elements of the 2D array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "2D Array elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }
    for (int i = 0; i < rows; i++) {
        delete[] arr[i]; 
    }
    delete[] arr; 
    return 0;
}

