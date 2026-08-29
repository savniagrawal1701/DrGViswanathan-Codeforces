#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int get_max_score(int n, string s) {
    int a = 0, b = 0, c = 0, d = 0;

    for (int i =0;i<s.size();i++) {
        if (s[i] == 'A') a++;
        else if (s[i] == 'B') b++;
        else if (s[i] == 'C') c++;
        else if (s[i] == 'D') d++;
    }

    return min(a, n) + min(b, n) + min(c, n) + min(d, n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ans = get_max_score(n, s);
        cout << ans << endl;
    }
    return 0;
}
