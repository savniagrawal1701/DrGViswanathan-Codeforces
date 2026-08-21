#include <iostream>
#include <string>

using namespace std;

int solve(string s)
{
    int ans = (s.length() - 1) * 9 + (s[0] - '0');
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = solve(s);
        cout << ans << endl;
    }
    return 0;
}
