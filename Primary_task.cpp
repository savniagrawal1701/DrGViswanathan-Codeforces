#include <bits/stdc++.h>

using namespace std;

string solve(string s) {
    if (s.length() < 3) {
        return "NO";
    }
    if (s[0] != '1' || s[1] != '0') {
        return "NO";
    }
    if (s[2] == '0') {
        return "NO";
    }
    int x = stoi(s.substr(2));
    if (x >= 2) {
        return "YES";
    }
    return "NO";
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