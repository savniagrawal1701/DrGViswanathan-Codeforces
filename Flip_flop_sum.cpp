#include <bits/stdc++.h>

using namespace std;

int solve(int n, const vector<int>& a) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    
    bool found_neg_neg = false;
    bool found_pos_neg = false;
    
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == -1 && a[i + 1] == -1) {
            found_neg_neg = true;
        }
        if (a[i] != a[i + 1]) {
            found_pos_neg = true;
        }
    }
    
    if (found_neg_neg) {
        return sum + 4;
    } else if (found_pos_neg) {
        return sum;
    } else {
        return sum - 4;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(n, a) << "\n";
    }
    
    return 0;
}