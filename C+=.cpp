#include <iostream>

int solve(int a, int b, int n) {
    int count = 0;
    while (a <= n && b <= n) {
        if (a < b) {
            a += b;
        } else {
            b += a;
        }
        count++;
    }
    return count;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, n;
        std::cin >> a >> b >> n;
        std::cout << solve(a, b, n) << "\n";
    }
    return 0;
}
