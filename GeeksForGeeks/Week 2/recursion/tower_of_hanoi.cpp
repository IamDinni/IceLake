#include <iostream>
#include <string>
#include <cmath>

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

using namespace std;

/*
    T(1) = 1
    T(n) = 2*T(n-1) + 1

    Time Complexity: O(2^n)

*/
void towerOfHanoi(int n, char source, char auxillary, char destination)
{
    if (n == 1)
    {
        cout << "Move 1 from " << source << " to " << destination << endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxillary);
    cout << "Move " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxillary, source, destination);
}

int main()
{

    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}