#include <bits/stdc++.h>

using namespace std;

long long solve(int n, vector<int>& a) {
    long long maxi = 0;
    for (int i = 0; i < n; ++i) {
        maxi = max(maxi, (long long)a[i]);
    }
    return maxi * n;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            cout << solve(n, a) <<endl;
        }
    }
    
    return 0;
}