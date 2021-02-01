#include <iostream>

using namespace std;

int sumOfDigits(int n)
{

    if (n < 10)
        return n;

    return sumOfDigits(n / 10) + n % 10;
}

int main()
{

    int num = 2534;

    cout << sumOfDigits(num) << endl;

    return 0;
}