#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

void solve() {
    int t = 0;
    
    
    for (int i = 0; i < 10; ++i) {
        string row;
        cin >> row;
        
        
        for (int j = 0; j < 10; ++j) {
            
            if (row[j] == 'X') {
                
                
                if ((i == 4 || i == 5) && (j == 4 || j == 5)) {
                    t += 5;
                }
                
                else if ((i >= 3 && i <= 6) && (j >= 3 && j <= 6)) {
                    t += 4;
                }
                
                else if ((i >= 2 && i <= 7) && (j >= 2 && j <= 7)) {
                    t += 3;
                }
                
                else if ((i >= 1 && i <= 8) && (j >= 1 && j <= 8)) {
                    t += 2;
                }
                
                else {
                    t += 1;
                }
                
            }
        }
    }
    cout << t << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
