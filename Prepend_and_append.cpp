#include <bits/stdc++.h>

using namespace std;

int solve(int n, string s) {
    int left = 0;
    int right = n - 1;
    
    
    while (left < right && s[left] != s[right]) {
        left++;
        right--;
    }
    
    
    return right - left + 1;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            cout << solve(n, s) << endl;
        }
    }
    
    return 0;
}