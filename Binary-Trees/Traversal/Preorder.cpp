#include <iostream>
#include <vector>
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

void preorderTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    ans.push_back(root->data);
    preorderTraversal(root->left, ans);
    preorderTraversal(root->right, ans);
}

vector<int> preorder(Node *root)
{
    vector<int> ans;
    preorderTraversal(root, ans);
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result = preorder(root);

    cout << "Preorder Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}