#include <cmath>
#include <iostream>
using namespace std;

double cToF(int C)
{
    double ans;

    ans = 9 * C / 5 + 32;

    return ans;
}

int main()
{
    int T, C;
    cin >> T;

    while (T--)
    {
        cin >> C;
        cout << floor(cToF(C)) << endl;
    }
}