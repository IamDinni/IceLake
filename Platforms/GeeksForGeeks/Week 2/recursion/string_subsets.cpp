/*
    Problem: print subsets of string
    Input: "ABC"
    Output: { "", "A", "B", "C", "AB", "BC", "AC"}
*/

#include <iostream>
#include <string>

using namespace std;

void printSub(string s, string current = "", int index = 0)
{
    if (index == s.length())
    {
        cout << current << " ";
        return;
    }

    printSub(s, current, index + 1);
    printSub(s, current + s[index], index + 1);
}