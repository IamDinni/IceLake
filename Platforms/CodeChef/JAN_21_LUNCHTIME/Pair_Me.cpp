#include <iostream>
#include <string>
#include <cmath>

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

using namespace std;

bool pairMe(int x, int y, int z)
{
    if (x + y == z || x + z == y || y + z == x)
        return true;
    return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int T;
    int x, y, z;
    cin >> T;
    while (T--)
    {
        cin >> x >> y >> z;
        if (pairMe(x, y, z))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}