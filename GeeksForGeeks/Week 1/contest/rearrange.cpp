#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rearrange(vector<int> &array, int n)
    {

        vector<int> v(array.begin(), array.end());

        for (int i = 0; i < n; i++)
        {
            // search i in array
            for (int j = 0; j < n; j++)
            {
                if (v[j] == i)
                {
                    array[j] = v[i];
                }
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        Solution ob;
        ob.rearrange(array, n);
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
        cout << "\n";
    }
}