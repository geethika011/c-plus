#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeArrays(vector<int> arr1, vector<int> arr2) {
    vector<int> merged = arr1;
    merged.insert(merged.end(), arr2.begin(), arr2.end());
    sort(merged.begin(), merged.end());
    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};
    vector<int> merged = mergeArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
