#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string solve(int y, int w) {
    int target = 6 - max(y, w) + 1;
    string fractions[] = {"0/1", "1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    return fractions[target];
}

int main() {
    
    int y, w;
    cin >> y >> w;
    
    cout << solve(y, w) << "\n";
    
    return 0;
}
