#include<bits/stdc++.h>
using namespace std;


long long solve(vector<long long> &a, int n) {
    long long totalpos = 0;
    long long totalneg = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            totalpos = totalpos + a[i]; 
        } else {
            totalneg = totalneg + a[i]; 
        }
    }
    
    
    long long ans = abs(abs(totalpos) - abs(totalneg));
    return ans;
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
       cout<< solve(a, n)<<endl;
    }
    
    return 0;
}
