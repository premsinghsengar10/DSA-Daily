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

int heightOfTree(Node *root)
{
    if (root == false)
    {
        return 0;
    }

    int right = heightOfTree(root->right);
    int left = heightOfTree(root->left);

    return max(left, right) + 1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    cout << heightOfTree(root) << endl;
}