#include <bits/stdc++.h>
using namespace std;

// With Data Structures

// Time Complexity: O(N)
bool isUnique1(string &s)
{
  size_t N = s.size();

  // Assuming ASCII String (In extended ASCII - 256)
  if (N > 128)
    return false;

  bool char_set[128];

  for (int i = 0; i < N; i++)
  {
    int val = s.at(i);
    if (char_set[val]) // Already found this char in string
    {
      return false;
    }

    char_set[val] = true;
  }

  return false;
}

// Without Data Structure
bool isUnique(string &s)
{

  size_t N = s.size();

  sort(s.begin(), s.end());       // O(NlogN)
  for (int i = 0; i < N - 1; i++) // O(N)
  {
    if (s[i] == s[i + 1])
      return false;
  }

  return true;
}

int main()
{
  string str = "aefghilzm";
  cout << (isUnique1(str) ? "Yeah" : "No")
       << "\n";

  return 0;
}