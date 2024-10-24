#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    unordered_set<int> common;
    for (int i : arr1) {
        for (int j : arr2) {
            if (i == j) common.insert(i);
        }
    }
    for (int elem : common) cout << elem << " ";
    return 0;
}
