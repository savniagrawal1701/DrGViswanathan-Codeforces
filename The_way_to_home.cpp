#include <bits/stdc++.h>

using namespace std;

int f(int ind, int d, const string& s, vector<int>& memo) {
    
    if (ind == 0) return 0;
    
    
    if (memo[ind] != -1) return memo[ind];
    
    int minst = 1e9; 
    
    
    for (int j = 1; j <= d; j++) {
        if (ind - j >= 0) {
            if (s[ind - j] == '1') {
                int jump = f(ind - j, d, s, memo) + 1;
                minst = min(minst, jump);
            }
        }
    }
    
    return memo[ind] = minst;
}

int solve(int n, int d, string s) {
    vector<int> memo(n, -1);
    int ans = f(n - 1, d, s, memo);
    return (ans >= 1e9) ? -1 : ans;
}

int main() {
    int n, d;
    if (cin >> n >> d) {
        string s;
        cin >> s;
        cout << solve(n, d, s) << "\n";
    }
    
    return 0;
}