#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
};

void preOrderTraversal(node *temp)
{
    if (temp != NULL)
    {
        cout << " " << temp->data;
        preOrderTraversal(temp->left);
        preOrderTraversal(temp->right);
    }
}

void inOrderTraversal(node *temp)
{
    if (temp != NULL)
    {

        preOrderTraversal(temp->left);
        cout << " " << temp->data;
        preOrderTraversal(temp->right);
    }
}

void postOrderTraversal(node *temp)
{
    if (temp != NULL)
    {
        preOrderTraversal(temp->left);
        preOrderTraversal(temp->right);
        cout << " " << temp->data;
    }
}

node *newNode(int value)
{
    node *temp = new node();
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main()
{
    node *root = newNode(7);
    root->left = newNode(21);
    root->right = newNode(83);

    //       7
    //    21   83

    cout << "\nPreorder Traversal: ";
    preOrderTraversal(root); // Output: 7 21 83
    cout << "\nInorder Traversal: ";
    inOrderTraversal(root); // Output: 21 7 83
    cout << "\nPostorder Traversal: ";
    postOrderTraversal(root); // Output: 21 83 7
}