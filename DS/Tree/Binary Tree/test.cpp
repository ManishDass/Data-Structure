#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node *head = NULL; // global head pointer

void insertAtEnd(int value)
{
    node *newNode = new node();
    newNode->data = value;

    if (head == NULL) // if there is no other node exist then no need to traverse
    {
        head = newNode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main()
{
    insertAtEnd(12);
    insertAtEnd(23);
    insertAtEnd(91);
    insertAtEnd(77);
}