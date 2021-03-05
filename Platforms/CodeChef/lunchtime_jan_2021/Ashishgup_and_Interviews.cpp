#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string whosHe(int arr[], int n, int k)
{
    int solved = 0;
    bool slow = false;
    bool bot = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
            slow = true;

        if (arr[i] != -1)
        {
            solved++;
        }

        if (arr[i] != 1 && arr[i] != 0)
            bot = false;
    }

    if (solved < ceil(n / 2.0))
    {
        return "Rejected";
    }

    if (slow)
        return "Too Slow";

    if (bot)
        return "Bot";

    return "Accepted";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int T;
    int N, K;
    cin >> T;
    while (T--)

    {
        cin >> N >> K;
        int arr[N];
        for (int &i : arr)
            cin >> i;
        cout << whosHe(arr, N, K) << endl;
    }

    return 0;
}