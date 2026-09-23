#include <bits/stdc++.h>

using namespace std;

int solve(int n, const vector<int>& a, const vector<int>& b) {
    int diff = 0;
    int cntA = 0;
    int cntB = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            diff++;
        }
        if (a[i] == 1) cntA++;
        if (b[i] == 1) cntB++;
    }
    return min(diff, abs(cntA - cntB) + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        cout << solve(n, a, b) << "\n";
    }
    
    return 0;
}