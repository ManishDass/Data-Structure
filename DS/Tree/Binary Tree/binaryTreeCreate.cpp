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

    cout << "(-1 For no node)\nEnter Data: ";
    cin >> x;

    if (x == -1)
    {
        return 0;
    }

    newNode->data = x;
    cout << "\nEnter Data for left child";
    newNode->left = create();

    cout << "\nEnter Data for right child";
    newNode->right = create();

    return newNode;
}

main()
{
    node *root = create();
}