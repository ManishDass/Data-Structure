#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int subject1mark;
    int subject2mark;
    int subject3mark;
    int totalMark;
    node *next;
};

node *front = NULL;
node *rear = NULL;

void inQueue(int subject1, int subject2, int subject3)
{
    node *newNode = new node();
    if (rear == NULL && front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        }
}

void deQueue()
{
}

int main()
{
}