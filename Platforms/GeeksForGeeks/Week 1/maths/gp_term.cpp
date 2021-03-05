#include <iostream>
#include <cmath>

using namespace std;

double termOfGP(int A, int B, int N)
{
    const double commonRatio = (double)B / A;

    /* GP nth term = a*(r^(n-1))
        where, a = First term of Geometric Progression
               r = common ratio  (second term / first term)
               n = position n
    */
    const double nthTerm = A * pow(commonRatio, N - 1);

    return nthTerm;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;

        int N;
        cin >> N;

        cout << floor(termOfGP(A, B, N)) << endl;
    }

    return 0;
}