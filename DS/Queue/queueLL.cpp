#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *front = NULL;
node *rear = NULL;

void enQueue(int value)
{
    node *newNode = new node();
    newNode->data = value;

    if (rear == NULL)
    {
        rear = front = newNode;
        newNode->next = NULL;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void deQueue()
{
    if (rear == NULL)
    {
        cout << "\nUnderflow" << endl;
    }
    else
    {
        cout << front->data << " was removed" << endl;
        front = front->next;
    }
}

void traverse()
{
    if (rear == NULL)
    {
        cout << "\nUnderflow" << endl;
    }
    else
    {
        node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
}

main()
{
    enQueue(27);
    enQueue(34);
    enQueue(97);
    enQueue(10);
    enQueue(38);
    enQueue(51);
    enQueue(66);
    traverse();
    deQueue();
    traverse();
}