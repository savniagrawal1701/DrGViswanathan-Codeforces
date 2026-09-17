#include <bits/stdc++.h>

using namespace std;

long long solve(long long a, long long b) {
    long long diff = abs(a - b);
    return (diff + 9) / 10;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }
    
    return 0;
}