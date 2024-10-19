#include <iostream>
using namespace std;

void check_vowel_or_consonant() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A'; // Convert to lowercase
    cout << (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ? "Vowel" : "Consonant") << endl;
}

int main() {
    check_vowel_or_consonant();
    return 0;
}

