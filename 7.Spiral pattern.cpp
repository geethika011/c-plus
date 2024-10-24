#include <iostream>
using namespace std;

int main() {
    int n = 3, a[3][3] = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) cout << a[top][i] << " ";
        top++;
        for (int i = top; i <= bottom; ++i) cout << a[i][right] << " ";
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; --i) cout << a[bottom][i] << " ";
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) cout << a[i][left] << " ";
            left++;
        }
    }
    return 0;
}
