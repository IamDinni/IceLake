#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

/* Water stored in wall boundaries
   => 3, 4, 0, 2, 4 -> 6
*/
int find_left_max(int arr[], int n, int i)
{
	int maximum = 0;
	for (int j = 0; j <= i; j++)
	{
		maximum = max(maximum, arr[i]);
	}

	return maximum;
}

int find_right_max(int arr[], int n, int i)
{
	int maximum = 0;
	for (int j = i; j <= n - 1; j++)
	{
		maximum = max(maximum, arr[i]);
	}

	return maximum;
}

// Time Complexity - O(n*n)
// Can be optimized to O(n) by using two arrays
int find_total_water(int arr[], int n)
{
	int total_water = 0; // ans
	for (int i = 1; i < n - 1; i++)
	{
		int left_max = find_left_max(arr, n, i);
		int right_max = find_right_max(arr, n, i);
		total_water = total_water + min(left_max, right_max) - arr[i];
	}

	return total_water;
}

// Basic Mathematics

bool is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

// Print prime # from 1 to n

// Method 1: (without using sieve) - O(n*sqrt(n))
void printPrime(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (is_prime(i))
			printf("%d", i);
	}
}

// Method 2: Sieve of eratosthenes

void printnPrime(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = 2 * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print
	for (int p = 2; p <= n; p++)
		if (prime[p] == true)
			cout << p << " ";
}

// Function to print all sub strings

/*
	st1 = 'pqr'
	
	p
	pq
	pqr
	q
	qr
	r	
*/

void subString(string s, int n)
{
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
		{
			string subString = "";
			for (int j = i; j < i + len; j++)
			{
				subString = subString + s[j];
			}
			printf("%s", subString.c_str());
		}
}