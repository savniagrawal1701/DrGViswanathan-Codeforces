#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m) {
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cout << string(m, '#') << "\n";
        } else if (i % 4 == 1) {
            cout << string(m - 1, '.') << "#\n";
        } else {
            cout << "#" << string(m - 1, '.') << "\n";
        }
    }
}

int main() {
    int n, m;
    if (cin >> n >> m) {
        solve(n, m);
    }
    
    return 0;
}