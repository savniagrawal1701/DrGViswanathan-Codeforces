#include <bits/stdc++.h> 
using namespace std; 

string solve(string a) { 
    int n = a.size(); 
    int i = 0; 
    int j = 0; 
    while (i < n) { 
        
        if (j < n && i != j && a[i] != a[j]) { 
            swap(a[i], a[j]); 
            return a; 
        } 
        j++; 
        if (j == n) { 
            i++; 
            j = 0; 
        } 
    } 
    return "NO"; 
} 

int main() { 
    int t; 
    cin >> t; 
    while (t--) { 
        string s; 
        cin >> s; 
        string ans = solve(s); 
        if (ans == "NO") { 
            cout << "NO"<<endl; 
        } else { 
            cout << "YES" <<endl<< ans << endl; 
        } 
    } 
    return 0; 
}
