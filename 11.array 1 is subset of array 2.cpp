#include <iostream>
#include <unordered_set>
using namespace std;

bool isSubset(int arr1[], int arr2[], int n, int m) {
    unordered_set<int> set;
    for (int i = 0; i < m; i++)
        set.insert(arr2[i]);
    for (int i = 0; i < n; i++)
        if (set.find(arr1[i]) == set.end())
            return false;
    return true;
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, n, m))
        cout << "Array 1 is a subset of Array 2";
    else
        cout << "Array 1 is not a subset of Array 2";
    return 0;
}
