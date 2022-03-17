#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head = NULL;

void insertAtFront(int value)
{
    node *newNode = new node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int value)
{
    node *newNode = new node();
    newNode->data = value;

    if (head == NULL)
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

void insertAtPos(int value, int pos)
{

    node *temp = head;
    int counter = 0;

    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }

    if (pos <= counter)
    {
        node *newNode = new node();
        newNode->data = value;
        temp = head;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *temp2 = head;

            counter = 0;
            while (counter < pos - 2)
            {
                temp2 = temp2->next;
                counter++;
            }

            temp = temp2->next;
            temp2->next = newNode;
            newNode->next = temp;

            // cout << "Counter: " << counter << endl;
            // cout << "DATA: " << temp2->data << endl;
        }
    }
}

void display()
{
    node *temp = head;

    if (head == NULL)
    {
        cout << "\nLinked list is empty" << endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }
}

int main()
{
    insertAtFront(23);
    insertAtFront(17);
    insertAtFront(19);
    insertAtEnd(81);
    insertAtPos(11, 1);
    display();
}