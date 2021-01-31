#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define LIMIT 1000000000

bool isDivisible(int arr[], int n, int k)
{
    bool divisible;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        divisible = false;
        for (int j = num; j <= INT32_MAX; j = 2 * j)
        {
            if (j % k == 0)
            {
                divisible = true;
                break;
            }
        }

        if (!divisible)
            return false;
    }

    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int T, N, K;
    cin >> T;

    while (T--)
    {
        cin >> N >> K;
        int arr[N];
        for (int &i : arr)
            cin >> i;
        cout << (isDivisible(arr, N, K) ? "YES" : "NO") << endl;
    }

    return 0;
}