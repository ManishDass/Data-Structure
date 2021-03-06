#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
};

node *create()
{
    int x;
    node *newNode = new node();
    cin >> x;

    if (x == -1)
    {
        return 0;
    }

    newNode->data = x;
    cout << "\nEnter Data for left child: ";
    newNode->left = create();

    cout << "\nEnter Data for right child: ";
    newNode->right = create();

    return newNode;
}

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

main()
{
    cout << "\nEnter data for Root Child: ";
    node *root = create();

    cout << "\nPreorder Traversal: ";
    preOrderTraversal(root);
    cout << "\nInorder Traversal: ";
    inOrderTraversal(root);
    cout << "\nPostorder Traversal: ";
    postOrderTraversal(root);
}