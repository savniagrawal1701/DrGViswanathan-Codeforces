#include <bits/stdc++.h>

using namespace std;

long long even(long long a, long long b) {
    
    if (a % 2 == 1 && b % 2 == 1) {
        return a * b + 1;
    } 
    
    else if (a % 2 == 0 && b % 2 == 1) {
        return -1;
    } 
    
    else if (a % 2 == 1 && b % 2 == 0) {
        if (b % 4 == 0) {
            return a * (b / 2) + 2;
        } else {
            return -1;
        }
    } 
    
    else { 
        return a * (b / 2) + 2;
    }
}

int main() {
    
    int t;
    cin >> t; 
    while (t--) {
        long long a, b;
        cin >> a >> b; 
        cout << even(a, b) << "\n"; 
    }
    
    return 0;
}
