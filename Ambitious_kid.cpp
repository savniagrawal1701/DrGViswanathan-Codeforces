#include <bits/stdc++.h>


using namespace std;

int solve(int n, vector<int>& a) {
    int mini = abs(a[0]);
    for (int i = 1; i < n; i++) {
        mini = min(mini, abs(a[i]));
    }
    return mini;
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << solve(n, a) << endl;
    }
    return 0;
}
