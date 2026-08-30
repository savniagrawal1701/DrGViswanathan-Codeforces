#include <iostream>

using namespace std;

int solve(int n, int sum) {
    int ways = 0;
    int total = n + 1;
    
    for (int i = 1; i <= 5; ++i) {
        if ((sum + i) % total != 1) {
            ways++;
        }
    }
    return ways;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << solve(n, sum) <<endl;

    return 0;
}
