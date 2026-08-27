#include <iostream>
#include <string>

using namespace std;

int solve(int a )
{
    if(a%3==0) return 0;
    else if (a%3 ==1) return 2;
    else return 1;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin>>a;
        cout << solve(a) << endl;
    }
    return 0;
}
