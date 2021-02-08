#include <stack>
#include <iostream>

using namespace std;

class MinStack
{
    stack<int> S;
    int min;

public:
    void push(int num)
    {
        if (S.empty())
        {
            S.push(num);
            min = num;
            cout << "Pushed: " << num << '\n';
            return;
        }

        if (num >= min)
        {
            S.push(num);
        }
        else
        {
            S.push(2 * num - min);
            min = num;
        }
        cout << "Pushed: " << num << endl;
    }

    void pop()
    {
        if (S.empty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }

        int top = S.top();
        S.pop();

        if (top < min)
        {
            cout << "Popped: " << min << endl;
            min = 2 * min - top;
        }
        else
        {
            cout << "Popped: " << top << endl;
        }
    }

    void getMin()
    {
        if (S.empty())
        {
            cout << "Stack is Empty" << endl;
        }

        cout << "Min Element: " << min << "\n";
    }
};

int main()
{
    MinStack mns;

    mns.push(-3);
    mns.push(-2);
    mns.getMin();
    mns.push(-8);
    mns.getMin();
    mns.push(-1);
    mns.getMin();
    mns.pop();
    mns.getMin();

    return 0;
}