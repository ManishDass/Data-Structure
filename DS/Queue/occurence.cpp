#include <bits/stdc++.h>
using namespace std;

int n = 5;
int arr[5], front = -1, rear = -1;

void enqueue(int value)
{
    if (front == -1 && rear == -1)
        front = rear = 0;
    else
        rear++;

    arr[rear] = value;
}

void deQueue()
{
    if (front == -1 && rear == -1)
        cout << "\nUnderflow" << endl;
    else
    {
        cout << "\nElement " << arr[front] << " has been removed from the Queue" << endl;
        front++;
    }
}

void display()
{
    int count = 0;

    if (front == -1 && rear == -1)
        cout << "\nUnderflow" << endl;
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void count()
{
    int count = 0;

    if (front == -1 && rear == -1)
        cout << "\nUnderflow" << endl;
    else
    {
        for (int i = front; i <= rear; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }

        cout << "\nFrequency of 0 elements: " << count << endl;
    }
}

int main()
{
    int input;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " Elements: ";
        cin >> input;
        enqueue(input);
    }
    count(); // calling the function to count frequency of 0 elements
}