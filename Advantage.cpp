#include <bits/stdc++.h>

using namespace std;

vector<long long> solve(int n, const vector<long long>& a) {
    vector<long long> b = a;
    sort(b.begin(), b.end());
    long long mx1 = b[n - 1], mx2 = b[n - 2];
    vector<long long> res(n);
    for (int i = 0; i < n; ++i) {
        res[i] = a[i] - (a[i] == mx1 ? mx2 : mx1);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<long long> ans = solve(n, a);
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    
    return 0;
}