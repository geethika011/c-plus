#include <iostream>
using namespace std;

bool isIdentityMatrix(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << (isIdentityMatrix(matrix, 3) ? "It is an identity matrix." : "It is not an identity matrix.") << endl;
    return 0;
}
