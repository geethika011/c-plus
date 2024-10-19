#include <iostream>
using namespace std;
int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter dimensions of first matrix (rows cols): ";
    cin >> rows1 >> cols1;
    cout << "Enter dimensions of second matrix (rows cols): ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }
    int matrix1[100][100], matrix2[100][100], product[100][100] = {0};
    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of the two matrices: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

