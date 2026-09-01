#include <bits/stdc++.h>
using namespace std;
int solve( vector<int> &arr)
{
    if (arr.empty())
    {
        return 0;
    }
    int maxi = 1;
    int curr = 1;
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] > arr[i - 1])
        {
            curr++;
        }
        else
        {
            curr = 1;
        }
        if (curr > maxi)
        {
            maxi = curr;
        }
    }
    return maxi;
}

int main()
{
    int n;
    if (!(cin >> n))
    {
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int result = solve(arr);
    cout << result << endl;
    return 0;
}
