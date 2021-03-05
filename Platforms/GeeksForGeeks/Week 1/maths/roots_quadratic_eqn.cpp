#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> quadraticRoots(int a, int b, int c)
    {

        int x1, x2;
        vector<int> roots;

        const int DETERMINANT = b * b - 4 * a * c;

        if (DETERMINANT < 0)
        {
            roots.emplace_back(-1);
            return roots;
        }
        else if (DETERMINANT == 0)
        {
            x1 = x2 = floor(-b / (2 * a));
        }
        else
        {
            x1 = floor((-b + sqrt(DETERMINANT)) / (2 * a));
            x2 = floor((-b - sqrt(DETERMINANT)) / (2 * a));
        }

        roots.emplace_back(max(x1, x2));
        roots.emplace_back(min(x1, x2));

        return roots;
    }
};

int main()
{
    // Testcases
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++)
                cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}