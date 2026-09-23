#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& a) {
    if (n <= 1) return 0;
    int cnt = 0;
    int mn = a[0];
    int mx = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > mx) {
            mx = a[i];
            cnt++;
        } else if (a[i] < mn) {
            mn = a[i];
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(n, a) << "\n";
    }
    
    return 0;
}