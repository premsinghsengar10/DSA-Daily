// <--- Insert at start ---->

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }

    Node(int val, Node *next1)
    {
        data = val;
        next = next1;
    }
};

class Solution
{
public:
    Node *insertAtStart(Node *node, int data)
    {
        Node *newNode = new Node(data, node);

        return newNode;
    }

    void printLinkedList(Node *node)
    {
        Node *temp = node;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Node *root = new Node(1);
    root->next = new Node(2);

    cout << "Before Adding" << endl;
    Solution sol;
    sol.printLinkedList(root);

    root = sol.insertAtStart(root, 3);

    cout << "After Adding" << endl;
    sol.printLinkedList(root);
}