#include <bits/stdc++.h>
using namespace std;

//Day1 : Sorting and searching

/*
    Problem: Maximum toys with k amount 
*/

/*
    Method: Using sort() function
    Time: O(nlogn)
    Space: O(1)
*/
int fun(int arr[], int n, int k)
{
    if (n == 0 || k == 0)
    {
        return 0;
    }

    int i = 0;
    int ans = 0;

    sort(arr, arr + n); // O(nlogn)

    while (i < n && k > arr[i]) // O(k)
    {
        ans++;
        k = k - arr[i];
        i++;
    }

    return ans;
}