#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

int main()
{
    node *root = new node();
    node *first = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();

    root->left = first;
    root->right = second;

    first->left = third;
    first->right = fourth;

    second->left = NULL;
    second->right = NULL;

    third->left = NULL;
    third->right = NULL;

    fourth->left = NULL;
    fourth->right = NULL;

    first->data = 13;
    second->data = 41;
    third->data = 25;
    fourth->data = 79;

    cout << root->left->data << endl;
    cout << root->right->data << endl;

    cout << root->left->left->data << endl;
    cout << root->left->right->data << endl;
}