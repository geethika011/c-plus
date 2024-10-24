#include <iostream>
#include <unordered_map>
using namespace std;

int longestUniqueSubstring(string str) {
    int maxLength = 0, start = 0;
    unordered_map<char, int> charIndex;
    for (int end = 0; end < str.length(); end++) {
        if (charIndex.find(str[end]) != charIndex.end()) {
            start = max(start, charIndex[str[end]] + 1);
        }
        charIndex[str[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
}

int main() {
    string str = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " << longestUniqueSubstring(str) << endl;
    return 0;
}
