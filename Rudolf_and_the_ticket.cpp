#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m, int k, vector<int>& left, vector<int>& right) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (left[i] + right[j] <= k) {
                cnt++;
            } else {
                continue;
            }
        }
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> left(n);
        vector<int> right(m);
        for (int i = 0; i < n; ++i) {
            cin >> left[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> right[i];
        }
        cout << solve(n, m, k, left, right) << endl;
    }
    
    return 0;
}