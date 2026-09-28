
#include <bits/stdc++.h>

using namespace std;

string solve(int n, string s) {
    if (n < 26) return "NO";
    vector<int> hash(26, 0);
    for (int i = 0; i < n; i++) {
        hash[tolower(s[i]) - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (hash[i] == 0) return "NO";
    }
    return "YES";
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << solve(n, s) <<endl;
    
    return 0;
}
