#include <iostream>
#include <string>
#include <cmath>

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
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