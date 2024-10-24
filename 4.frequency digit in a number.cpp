#include <iostream>
using namespace std;

int main() {
    int num = 122333, freq[10] = {0};
    while (num > 0) {
        freq[num % 10]++;
        num /= 10;
    }
    for (int i = 0; i < 10; ++i) {
        if (freq[i] > 0) cout << i << ": " << freq[i] << endl;
    }
    return 0;
}
