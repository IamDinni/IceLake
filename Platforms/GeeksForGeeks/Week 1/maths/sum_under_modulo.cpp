#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long sumUnderModulo(long long a, long long b)
{
    long long ans;

    ans = (a % MOD + b % MOD) % MOD;

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        long long b;
        cin >> a >> b;
        cout << sumUnderModulo(a, b) << endl;
    }
}