#include <iostream>
#include <unordered_map>
using namespace std;

bool hasDuplicate(string str) {
    unordered_map<char, int> freq;
    for (char c : str) {
        freq[c]++;
        if (freq[c] > 1)
            return true;
    }
    return false;
}

int main() {
    string s = "hello";
    if (hasDuplicate(s))
        cout << "String has duplicate characters.";
    else
        cout << "No duplicate characters in the string.";
    return 0;
}
