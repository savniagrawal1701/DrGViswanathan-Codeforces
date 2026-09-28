#include <bits/stdc++.h>

using namespace std;

string solve(int n, const vector<long long>& buckets) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += buckets[i];
    }
    long long root = sqrt(sum);
    if (root * root == sum) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> buckets(n);
        for (int i = 0; i < n; ++i) {
            cin >> buckets[i];
        }
        cout << solve(n, buckets) << endl;
    }
    
    return 0;
}