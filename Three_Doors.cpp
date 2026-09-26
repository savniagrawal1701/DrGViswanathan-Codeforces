#include <bits/stdc++.h>

using namespace std;

string solve(int x, const vector<int>& a) {
    int first = a[x];
    if (first == 0) return "NO";
    int second = a[first];
    if (second == 0) return "NO";
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> a(4);
        cin >> a[1] >> a[2] >> a[3];
        cout << solve(x, a) << "\n";
    }
    
    return 0;
}