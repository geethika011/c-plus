#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    string result = str1 + str2;
    cout << "Concatenated string: " << result << endl;
    return 0;
}
