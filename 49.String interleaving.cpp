#include <iostream>
using namespace std;

bool isInterleaved(string str1, string str2, string result) {
    int len1 = str1.length(), len2 = str2.length(), len3 = result.length();
    if (len1 + len2 != len3) return false;

    bool dp[len1 + 1][len2 + 1];
    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = true;
            } else if (i == 0) {
                dp[i][j] = (str2[j - 1] == result[i + j - 1]) && dp[i][j - 1];
            } else if (j == 0) {
                dp[i][j] = (str1[i - 1] == result[i + j - 1]) && dp[i - 1][j];
            } else {
                dp[i][j] = ((str1[i - 1] == result[i + j - 1]) && dp[i - 1][j]) ||
                           ((str2[j - 1] == result[i + j - 1]) && dp[i][j - 1]);
            }
        }
    }
    return dp[len1][len2];
}

int main() {
    string str1 = "abc", str2 = "def", result = "adbcef";
    cout << (isInterleaved(str1, str2, result) ? "It is an interleaving." : "It is not an interleaving.") << endl;
    return 0;
}
