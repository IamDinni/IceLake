#include <iostream>
#include <array>

using namespace std;

void reverse(array<int, 8> &arr, int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int start = i;

        // when k is not multiple of n
        int end = min(i + k - 1, n - 1);

        // reverse sub array
        while (start < end)
            swap(arr[start++], arr[end--]);
    }
}

int main()
{
    array<int, 8> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    size_t n = arr.size();

    reverse(arr, n, k);

    for (int a : arr)
        cout << a << " ";

    return 0;
}