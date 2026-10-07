#include <bits/stdc++.h>

using namespace std;

long long solve(int n, vector<string>& shapes) {
    long long tf = 0;
    for (int i = 0; i < n; ++i) {
        char c = shapes[i][0];
        if (c == 'T') tf += 4;
        else if (c == 'C') tf += 6;
        else if (c == 'O') tf += 8;
        else if (c == 'D') tf += 12;
        else if (c == 'I') tf += 20;
    }
    return tf;
}

int main() {
    int n;
    if (cin >> n) {
        vector<string> shapes(n);
        for (int i = 0; i < n; ++i) {
            cin >> shapes[i];
        }
        cout << solve(n, shapes) << endl;
    }
    
    return 0;
}