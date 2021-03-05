#include <iostream>
#include <cmath>

using namespace std;

int exactly3Divisors(int N)
{
    int count = 0;

    if (N < 3)
        return 0;

    for (int i = 4; i <= N; i++)
    {

        const double rt = sqrt(i);

        if (rt * rt == i)
        {
            count += 1;
            cout << sqrt(i) * sqrt(i) << endl;
        }
    }

    return count;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        cout << exactly3Divisors(N) << endl;
    }
}

1 6