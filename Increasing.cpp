#include <iostream>
#include <string>
#include <vector>        
#include <unordered_set> 

using namespace std;


string solve(vector<int>& a) 
{
    unordered_set<int> set;
    
    for (int num : a) {
        if (set.count(num) > 0) {
            return "NO"; 
        }
        set.insert(num);
    }
    
    return "YES";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> a(n);
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            
            
            string s = solve(a);
            cout << s << endl; 
        }
    }
    
    return 0;
}
