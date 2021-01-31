#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int minChanges(int arr[], int n)
{
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }

    if (even != 0 && odd != 0)
        return min(odd, even);

    return 0;
}

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
        cout << minChanges(arr, N) << endl;
    }

    return 0;
}