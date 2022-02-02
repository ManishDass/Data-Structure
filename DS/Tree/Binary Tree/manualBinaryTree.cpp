#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
};

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
    node *root = new node();
    root->left = newNode(7);   //            rooot
    root->right = newNode(34); //      7              34
                               //   21   83
    root->left->left = newNode(21);
    root->left->right = newNode(83);

    cout << root->left->data << endl;
    cout << root->right->data << endl;
    cout << root->left->left->data << endl;
    cout << root->left->right->data << endl;
}