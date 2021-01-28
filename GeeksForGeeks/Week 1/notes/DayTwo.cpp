#include <bits/stdc++.h>
using namespace std;

/* 
    Rotate array to left by d steps
    IN:  1 2 3 4 5 6 7
    OUT: 3 4 5 6 7 1 2
*/

/*
    Method 1:
    Time - O(n)
    Space - O(d) or O(n)    * steps = d%n
*/
void rotateArray(int arr[], int n, int d)
{
    int temp[d]; // 1 2
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - d; i++)
    { // 3 4 5 6 7 6 7
        arr[i] = arr[i + d];
    }

    for (int i = n - d, int j = 0; i < n; i++)
    { // 3 4 5 6 7 1 2
        arr[i] = temp[j++];
    }
}

/*
    Method 2:
    Time - O(n*d)
    Space - O(1)
*/

void rotate(int arr[], int n)
{ // 1 2 3 4 5 --> 2 3 4 5 1
    int tmp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = tmp;
}

void rotateArray2(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++) // O(d)
    {
        rotate(arr, n); // O(n)
    }
}

/*
    Method 3:
     - Reverse d (first)
     - Reverse n-d (last)
     - Reverse n 

    Time - O(n)
    Space - O(1)
*/

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}

void rotateArray3(int arr[], int n, int d)
{
    if (d == 0)
        return;

    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}

// SEARCHING

/*
    2 4 8 12 15 10 => search = 8 , output: index = 2;
*/

/* Linear Search 
    Time: O(n)
    Space: O(1)

*/
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

/*
    Binary Search
    Time: O(logn)
    Space: O(1)
*/

int binarySearch(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

/*
    Binary Search Problems
*/

// Square root of a # (Amazon)

// n = 25 => 5
// n = 27 => 5
// n = 35 => 5

/*  Method 1:
    Time: O(sqrt(n));
    
    If n = 10^18 => squareRoot(n) => 10^9, O(sqrt(n)) = O(10^9)
    
    Write another method having Time: O(logn) = O(64)
*/
int squareRoot(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i * i == n)
            return i; // n=25, i=5
        if (i * i > n)
            return i - 1; // n=27, i=6
    }
    return -1;
}

/*
    Method 2: Using binarySearch
    Time: O(logn)
*/

int square_root(int n)
{

    if (n == 0 || n == 1)
        return n;

    int l = 1;
    int r = n;
    int ans;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid * mid == n)
            return mid;

        if (mid * mid < n)
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}