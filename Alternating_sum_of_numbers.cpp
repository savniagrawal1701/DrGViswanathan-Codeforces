#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& a) {
    int tsum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            tsum += a[i];
        } else {
            tsum -= a[i];
        }
    }
    return tsum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(n, a) << endl;
    }
    
    return 0;
}