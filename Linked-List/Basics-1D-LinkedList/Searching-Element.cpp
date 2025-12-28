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
    // insert at start
    Node *insertAtStart(Node *node, int data)
    {
        Node *newNode = new Node(data, node);

        return newNode;
    }

    // delete the node
    Node *DeleteTheNode(int val, Node *root)
    {
        Node *temp = root;

        while (temp != NULL)
        {
            if (temp->data == val)
            {
                temp->data = temp->next->data;
                temp->next = temp->next->next;
            }

            temp = temp->next;
        }

        return temp;
    }

    // length of the LinkedList

    int lengthOfLinkedList(Node *root)
    {
        Node *temp = root;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }

    // searching element
    bool searchValue(Node *head, int key)
    {
        Node *current = head;

        while (current != NULL)
        {
            if (current->data == key)
            {
                return true;
            }
            current = current->next;
        }

        return false;
    }

    // printing the node
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

    cout << sol.lengthOfLinkedList(root) << endl;

    cout << "After Deleting 1" << endl;
    sol.DeleteTheNode(1, root);
    sol.printLinkedList(root);

    cout << "Searching Element 2: " << sol.searchValue(root, 2) << endl;
    cout << "Searching Element 5: " << sol.searchValue(root, 5) << endl;
}