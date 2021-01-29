#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long long getSmallestDivNum(long long n)
    {
        long long ans = 1;
        for (long long i = 1; i <= n; i++)
        {
            ans = (ans * i) / __gcd(ans, i);
        }

        return ans;
    }
};

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.getSmallestDivNum(n) << endl;
    }
    return 0;
}