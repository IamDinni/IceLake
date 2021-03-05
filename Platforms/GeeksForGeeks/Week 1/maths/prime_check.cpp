#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int N)
{
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        if (isPrime(N))
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }
}