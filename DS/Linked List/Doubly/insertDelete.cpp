#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};

// global head so dont need to pass head always as parameters
node *head = NULL; // in doubly we need to maintain head node address

void displayNode()
{
    node *temp;
    temp = head;

    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
    }

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtFront(int value)
{
    node *temp = new node(); // allocate memory for the temp in the heap

    if (head == NULL)
    {
        temp->data = value;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
    }
    else
    {
        temp->data = value;
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    }
}

void insertAtEnd(int value)
{
    node *temp = new node();
    node *temp2, *temp3 = head;

    if (head == NULL)
    {
        temp->data = value;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
    }
    else
    {

        while (temp3->next != NULL)
        {

            temp3 = temp3->next; // just before it reaches to the head node we assign temp1 to temp2
            temp2 = temp3;
        }

        // cout << temp2->data << endl;
        temp->data = value;
        temp->next = NULL;
        temp->prev = temp2;

        temp2->next = temp;
    }
}

void deleteFromFront()
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }

    else
    {
        node *temp = head;
        head = head->next;
        free(temp);
    }
}

void deleteFromEnd()
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }

    else
    {
        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        node *test = temp->prev;

        temp->prev->next = NULL;
    }
}

void deleteFromPosition(int pos)
{
    node *temp = head;
    node *temp2 = new node();
    node *temp3 = new node();

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    temp = head;

    if (pos > count)
    {
        cout << "Sorry Length Excedeed" << endl;
    }
    else if (pos == 1)
    {
        head = head->next;
        head->prev = NULL;
    }
    else
    {
        int flag = 1;

        while (flag < pos)
        {
            temp2 = temp;
            flag++;
            temp = temp->next;
        }

        if (pos == count)
        {
            temp2->next->prev = temp2;
            temp2->next = NULL;
        }
        else
        {
            temp2->next = temp->next;
            temp->next->prev = temp2;
        }
    }
}

void reverse()
{
    node *temp = head;
    node *current = new node();
    node *nextNode = new node();
    node *temp2 = new node();

    current = head;
    current->prev = NULL;

    while (current != NULL)
    {
        temp2 = current;

        nextNode = current->next;
        current->next = current->prev;
        current->prev = nextNode;

        current = nextNode;
    }

    head = temp2;
}

int main()
{
    // In this program linked list is made using class

    // displayNode(); // before perform any insertion
    insertAtFront(44);
    insertAtFront(75);
    insertAtFront(11);
    insertAtEnd(23);
    insertAtEnd(66);
    insertAtEnd(59);
    insertAtFront(11);
    insertAtEnd(23);
    insertAtEnd(66);
    insertAtEnd(59);
    // displayNode();

    deleteFromFront();
    deleteFromEnd();
    deleteFromEnd();
    deleteFromPosition(6);
    displayNode();
    reverse();
    displayNode();
}