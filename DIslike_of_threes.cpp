#include <iostream>

using namespace std;

int solve(int k) {
    int count = 0;
    int num = 1;
    while (true) {
        if (num % 3 != 0 && num % 10 != 3) {
            count++;
            if (count == k) {
                return num;
            }
        }
        num++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << solve(k) << "\n";
    }
    
    return 0;
}
