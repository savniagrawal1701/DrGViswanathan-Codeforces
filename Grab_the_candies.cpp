#include <iostream>
#include <vector>

using namespace std;


void checkcandies(const vector<int>& bags) {
    int msum = 0;
    int bsum = 0;
    
    for (int candies : bags) {
        if (candies % 2 == 0) {
            msum += candies;
        } else {
            bsum += candies;
        }
    }
    
    if (msum > bsum) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        
        vector<int> bags(n);
        for (int i = 0; i < n; ++i) {
            cin >> bags[i];
        }
        
        
        checkcandies(bags);
    }
    
    return 0;
}
