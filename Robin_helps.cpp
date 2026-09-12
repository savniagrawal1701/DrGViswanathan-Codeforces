#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k, const vector<int>& a) {
    int curr = 0;
    int giv = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= k) {
            curr += a[i];
        } else if (a[i] == 0) {
            if (curr > 0) {
                curr -= 1;
                giv += 1;
            }
        }
    }
    return giv;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(n, k, a) << endl;
    }
    return 0;
}