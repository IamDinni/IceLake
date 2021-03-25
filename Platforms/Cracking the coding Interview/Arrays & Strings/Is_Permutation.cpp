#include <bits/stdc++.h>
using namespace std;

bool isPermutationSORT(string s1, string s2); // Sorting (Nlogn)
bool isPermutationHASH(string s1, string s2); // Hashing (N)

int main()
{
  string s1, s2;
  s1 = "beagg";
  s2 = "gbeag";

  cout << isPermutationHASH(s1, s2) << endl;
  cout << isPermutationSORT(s1, s2) << endl;

  return 0;
}

bool isPermutationSORT(string s1, string s2)
{
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if (s1.compare(s2) != 0)
    return false;

  return true;
}

bool isPermutationHASH(string s1, string s2)
{
  unordered_map<char, int> m;

  for (char c : s1)
  {
    if (m.find(c) == m.end())
    {
      m[c] = 1;
    }
    else
    {
      m[c] += 1;
    }
  }

  for (char c : s2)
  {
    if (m.find(c) == m.end())
      return false;
    else
    {
      m[c] -= 1;
    }
  }

  for (auto itr = m.begin(); itr != m.end(); itr++)
  {
    if (itr->second != 0)
      return false;
  }

  return true;
}