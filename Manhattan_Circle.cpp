#include<bits/stdc++.h>
using namespace std;

pair<int, int> findcenter(int n, int m, const vector<string>& grid) {
    int minr = n, maxr = -1;
    int minc = m, maxc = -1;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                minr = min(minr, i);
                maxr = max(maxr, i);
                minc = min(minc, j);
                maxc = max(maxc, j);
            }
        }
    }
    
    int centerR = (minr + maxr) / 2 + 1;
    int centerC = (minc + maxc) / 2 + 1;
    
    return {centerR, centerC};
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        
        pair<int, int> center = findcenter(n, m, grid);
        cout << center.first << " " << center.second << endl;
    }
    
    return 0;
}
