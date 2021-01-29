#include <iostream>
#include <cmath>
using namespace std;

int digitInFactorial(int N)
{

    if (N == 0 || N == 1)
    {
        return 1;
    }

    int digits;

    // Kamenetsky formula
    double x = N * log10(N / M_E) + log10(2 * M_PI * N) / 2;

    digits = floor(x) + 1;

    return digits;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << digitInFactorial(N) << endl;
    }
}