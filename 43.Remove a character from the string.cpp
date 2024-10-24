#include <iostream>
using namespace std;

string removeCharacter(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return str;
}

int main() {
    string str = "Hello World";
    char ch = 'o';
    cout << "String after removing '" << ch << "': " << removeCharacter(str, ch) << endl;
    return 0;
}
