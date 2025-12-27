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

void inorderTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left, ans);
    ans.push_back(root->data);
    inorderTraversal(root->right, ans);
}

vector<int> inorder(Node *root)
{
    vector<int> ans;
    inorderTraversal(root, ans);
    return ans;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result = inorder(root);

    cout << "Inorder Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}