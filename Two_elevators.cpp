#include <bits/stdc++.h>

using namespace std;

int solve(long long a, long long b, long long c) {
    long long time1 = abs(a - 1);
    long long time2 = abs(b - c) + abs(c - 1);
    
    if (time1 < time2) {
        return 1;
    } else if (time2 < time1) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, c;
            cin >> a >> b >> c;
            cout << solve(a, b, c) << endl;
        }
    }
    
    return 0;
}