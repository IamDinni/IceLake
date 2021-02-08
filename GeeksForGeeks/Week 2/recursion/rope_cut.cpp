/*
    Problem: Given a rope of length 'n', find max number of pieces you can make such that
    length of every piece is in set {a, b, c} for given three values of a, b, c;

    Input: n = 5, a = 2, b = 5, c = 1
    Output: 5 pieces

    Input: n = 23, a = 12, b = 9, c = 11
    Output: 2 pieces (using a = 12 & c = 11)

    Input: n = 5 , a = 4, b = 2, c = 6
    Output: -1
*/

#include <iostream>
using namespace std;

// Time Complexity: O(3^n)
int rope_cut(int n, int a, int b, int c)
{

    if (n == 0)
        return 0;

    if (n < 0)
        return -1;

    int res = max(rope_cut(n - a, a, b, c), rope_cut(n - b, a, b, c), rope_cut(n - c, a, b, c));

    // Before adding 1, check if all the values aren't -1
    if (res == -1)
        return -1;

    return res + 1;
}

int main()
{
    int N;
    int a, b, c;
    cin >> N >> a >> b >> c;
    cout << rope_cut(N, a, b, c) << endl;
}