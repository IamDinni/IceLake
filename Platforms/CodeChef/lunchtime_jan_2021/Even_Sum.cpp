#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int winner(int arr[], int n)
{
    int sum = 0;
    bool A = true;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum % 2 == 0 ? 1 : 2;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;
        int arr[N];
        for (int &i : arr)
            cin >> i;
        cout << winner(arr, N) << endl;
    }

    return 0;
}