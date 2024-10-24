#include <iostream>
using namespace std;

void rotate180(int mat[3][3], int n) {
    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3, mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Matrix rotated by 180 degrees:" << endl;
    rotate180(mat, n);
    return 0;
}
