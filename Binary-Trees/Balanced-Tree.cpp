#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int diffHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int hleft = diffHeight(root->left);
    if (hleft == -1)
    {
        return -1;
    }

    int hright = diffHeight(root->right);
    if (hright == -1)
    {
        return -1;
    }

    if (abs(hleft - hright) > 1)
    {
        return -1;
    }

    return max(hright, hleft) + 1;
}

bool isBalancedTree(Node *root)
{
    return diffHeight(root) != -1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(8);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    cout << isBalancedTree(root) << endl;
}