#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int shops(vector<int> &prices, int coins)
{
    int low = 0;
    int high = prices.size();

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (prices[mid] <= coins)
        {

            low = mid + 1;
        }
        else
        {

            high = mid;
        }
    }

    return low;
}

int main()
{

    int n;
    if (!(cin >> n))
        return 0;

    vector<int> shop(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> shop[i];
    }

    sort(shop.begin(), shop.end());

    int q;
    cin >> q;

    while (q--)
    {
        int mi;
        cin >> mi;

        int result =shops(shop, mi);
        cout << result << endl;
    }

    return 0;
}
