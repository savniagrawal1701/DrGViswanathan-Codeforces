#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int k, vector<int>& a, vector<int>& t) {
    int r = 0;
    int l = 0;
    long long sum = 0;
    long long maxi = 0;
    long long base = 0;

    while (l <= r && r < n) {
        if (t[r] == 0) {
            sum = sum + a[r];
        } else {
            base = base + a[r];
        }
        r++;

        if (r - l > k) {
            if (t[l] == 0) sum = sum - a[l];
            l++;
        }
        maxi = max(sum, maxi);
    }
    return base + maxi;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), t(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    cout << solve(n, k, a, t) << endl;
    return 0;
}