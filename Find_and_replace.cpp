#include <bits/stdc++.h>

using namespace std;

string solve(int n, string s) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j += 2) {
            if (s[i] == s[j]) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(n, s) << "\n";
    }
    return 0;
}