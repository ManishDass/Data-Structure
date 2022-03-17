// Write a program to implement a linked list and find find the frequency of vowels.

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    char letter; // it will store character
    node *next;  // store next node address
};

node *head = NULL; // as linked is empty in the beginning

// function for inserting node at the front
void insertAtFront(char alphabet)
{
    node *newNode = new node(); // allocate memory for newNode
    newNode->letter = alphabet;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    cout << "\nCharacter " << alphabet << " inserted Successfully" << endl;
}

// function for inserting node at the end
void insertAtEnd(char alphabet)
{
    node *newNode = new node(); // allocate memory for newNode
    newNode->letter = alphabet;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        node *temp = head;

        while (temp->next != NULL) // iterate till last node
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
    cout << "\nCharacter " << alphabet << " inserted Successfully" << endl;
}

// function for Printing the nodes letter
void printLL()
{

    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->letter << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

// function for delete node from the front
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
        cout << "\n"
             << temp->letter << " has been successfully deleted from the Front" << endl;
        delete temp;
    }
}

// function for delete node from the end
void deleteFromEnd()
{

    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else if (head->next == NULL) // if linked list contain only 1 node then no need to traverse
    {
        cout << "\n"
             << head->letter << " has been successfully deleted from the End" << endl;
        head = NULL;
    }
    else // if linked list contain more than 1 node
    {
        node *temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        cout << "\n"
             << temp->next->letter << " has been successfully deleted from the End" << endl;
        delete (temp->next);
        temp->next = NULL;
    }
}

void countVowels()
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        int count = 0; // it will store how many time vowel will occurr
        node *temp = head;

        while (temp != NULL)
        {
            if (temp->letter == 'A' || temp->letter == 'E' || temp->letter == 'I' || temp->letter == 'O' || temp->letter == 'U' || temp->letter == 'a' || temp->letter == 'e' || temp->letter == 'i' || temp->letter == 'o' || temp->letter == 'u')
            {
                count++;
            }
            temp = temp->next;
        }
        delete (temp);
        cout << "\nFrequency of vowels are: " << count << endl;
    }
}

int main()
{
    char value;
    int choice;

    while (true)
    {
        cout << "\n1.Insert at Front\n2.Insert at End\n3.Delete from Front\n4.Delete from End\n5.Print\n6.Count Vowels\n7.Exit\n\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter charater which will be inserted at the front of Linked List: ";
            cin >> value;
            insertAtFront(value); // calling the function and passing value as a parameter
        }
        else if (choice == 2)
        {
            cout << "\nEnter charater which will be inserted at the end of Linked List: ";
            cin >> value;
            insertAtEnd(value); // calling the function and passing value as a parameter
        }
        else if (choice == 3)
        {
            deleteFromFront();
        }
        else if (choice == 4)
        {
            deleteFromEnd();
        }
        else if (choice == 5)
        {
            printLL();
        }
        else if (choice == 6)
        {
            countVowels();
        }
        else if (choice == 7)
        {
            cout << "\nSuccessfully exited" << endl;
            exit(0);
        }
        else
        {
            cout << "\nPlease choose a valid option!" << endl;
        }
    }
}