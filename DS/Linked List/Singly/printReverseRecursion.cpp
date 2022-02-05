#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};

void reversePrint(node *head)
{
    if (head == NULL)
    {
        return;
    }
    reversePrint(head->next);
    cout << head->data << " ";
}

main()
{
    node *first = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();

    first->data = 23;
    second->data = 45;
    third->data = 21;
    fourth->data = 78;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    node *head = first;

    reversePrint(head);
}