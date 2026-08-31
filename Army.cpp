#include <bits/stdc++.h>

using namespace std;

int tyears(vector<int>& d, int a, int b) {
    int ttl = 0;
    for (int i = a - 1; i < b - 1; ++i) {
        ttl += d[i];
    }
    return ttl;
}

bool checkCondition(int current, int target) {
    return current < target;
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> d(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> d[i];
        }
        int a, b;
        cin >> a >> b;
        if (checkCondition(a, b)) {
            cout << tyears(d, a, b) <<endl ;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
