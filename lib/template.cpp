#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

typedef long long ll;

#define f first
#define s second
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

const ll MOD = 1e9 + 7;

using namespace std;

void setIO(string str) { 
	freopen((str + ".in").c_str(), "r", stdin);
	freopen((str + ".out").c_str(), "w", stdout);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    setIO("name")

    int T;
    int N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int arr[N];
        for (int &i : arr)
            cin >> i;
    }

    return 0;
}