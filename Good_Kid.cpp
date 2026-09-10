#include <bits/stdc++.h>

using namespace std;

long long getMaxProduct(int n, vector<int> &a)
{
    int mini = 0;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] < a[mini])
        {
            mini = i;
        }
    }

    a[mini] += 1;

    long long maxp = 1;
    for (int i = 0; i < n; ++i)
    {
        maxp *= a[i];
    }

    return maxp;
}

int main()
{
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            int n;
            cin >> n;

            vector<int> a(n);
            for (int i = 0; i < n; ++i)
            {
                cin >> a[i];
            }

            cout << getMaxProduct(n, a) << endl;
        }
    }

    return 0;
}
