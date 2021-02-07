/* Problem: Count Leaves of a BT
    Time: O(n)

*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

unsigned int getLeafCount(struct Node *node)
{
    // If tree is empty
    if (!node)
        return 0;

    queue<Node *> q;

    // Do level order traversal starting from root
    int count = 0; // Leaves count
    q.push(node);
    while (!q.empty())
    {
        struct Node *temp = q.front();
        q.pop();

        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
        if (temp->left == NULL && temp->right == NULL)
            count++;
    }
    return count;
}

struct Node *newNode(int data)
{
    struct Node *node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

int main()
{
    /*
           1
          /  \
         2     3
        / \
       4   5
    */
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << getLeafCount(root);

    return 0;
}