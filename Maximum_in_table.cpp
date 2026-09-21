#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    vector<vector<int>> a(n, vector<int>(n, 1));
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    return a[n - 1][n - 1];
}

int main() {
    int n;
    if (cin >> n) {
        cout << solve(n) << "\n";
    }
    
    return 0;
}