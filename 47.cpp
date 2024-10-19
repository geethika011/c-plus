#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;
    int matrix[100][100];
    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];              
        secondaryDiagonalSum += matrix[i][n - i - 1];   
    }
    cout << "Sum of primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;
    return 0;
}

