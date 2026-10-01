#include <bits/stdc++.h>

using namespace std;

int solve(string s) {
    int n = s.length();
    if (n <= 1) return 0;
    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0') c0++;
        else c1++;
    }
    if (c0 == c1) return c0 - 1;
    return min(c0, c1);
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