#include <bits/stdc++.h>

using namespace std;

int solve(string s) {
    string target = "codeforces";
    int diff = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] != target[i]) {
            diff++;
        }
    }
    return diff;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
    
    return 0;
}