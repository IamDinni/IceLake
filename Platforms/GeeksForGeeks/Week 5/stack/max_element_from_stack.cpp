#include <stack>
#include <iostream>
using namespace std;

class MaxStack
{

    stack<int> S;
    int max;

public:
    void push(int number)
    {
        if (S.empty())
        {
            S.push(number);
            max = number;
            cout << "Pushed: " << number << "\n";
            return;
        }

        if (number <= max)
        {
            S.push(number);
        }
        else
        {
            S.push(2 * number - max);
            max = number;
        }

        cout << "Pushed: " << number << "\n";
    }

    int pop()
    {
        if (S.empty())
        {
            cout << "Stack is Empty" << '\n';
            return;
        }

        int top = S.top();
        S.pop();

        if (top > max)
        {
            cout << "Popped: " << max << '\n';
            max = 2 * max - top;
        }
        else
        {
            cout << "Popped: " << top << '\n';
        }
    }

    int getMax()
    {
        if (S.empty())
        {
            cout << "Stack is empty" << '\n';
            return;
        }

        cout << "Max Element in the Stack: " << max << "\n";
    }
};

int main()
{
    MaxStack mxs;

    mxs.push(2);
    mxs.push(5);
    mxs.getMax();
    mxs.push(7);
    mxs.push(19);
    mxs.getMax();
    mxs.pop();
    mxs.getMax();
    mxs.pop();
    mxs.peek();

    return 0;
}