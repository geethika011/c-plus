#include <iostream>
using namespace std;

void printLowerTriangular(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i >= j) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printLowerTriangular(matrix, 3);
    return 0;
}
