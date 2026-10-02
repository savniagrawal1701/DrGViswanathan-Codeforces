#include <bits/stdc++.h>

using namespace std;

int solve(int n, const vector<int>& num) {
    int sum = 0;
    int mini = 0;
    for (int i = 0; i < n; i++) {
        sum += num[i];
        mini = min(mini, sum);
    }
    return abs(mini);
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> num(n);
        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }
        cout << solve(n, num) << endl;
    }
    
    return 0;
}