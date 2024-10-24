#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2) {
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;
    if (areAnagrams(str1, str2))
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;
    return 0;
}
