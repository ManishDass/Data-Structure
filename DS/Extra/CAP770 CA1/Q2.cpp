// Write a program to implement a queue using array and then find the frequency of armstrong numbers.

#include <bits/stdc++.h>
using namespace std;

int n = 100;
int arr[100], front = -1, rear = -1; // initially the array is empty so front and rear both will be -1

void enQueue()
{
    if (rear == n - 1)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        int value;

        if (front == -1) // if front is -1 that means queue is empty so set the front value to 0
        {
            front = 0;
        }

        cout << "\nEnter an element: ";
        cin >> value;

        if (value < 0) // stop the user from entering negetive values
        {
            cout << "\nKindly enter positive value" << endl;
        }
        else
        {
            rear++;
            arr[rear] = value; // after incrementing the rear put the value into the array in index same as rear
            cout << "\nElement " << value << " successfully inserted in the array" << endl;
        }
    }
}

void deQueue()
{
    if (front == -1 || front > rear)
        cout << "\nUnderflow" << endl;
    else
    {
        cout << "\nElement " << arr[front] << " has been removed from the Queue" << endl;
        front++; // after deQueue operation increment front
    }
}

void display()
{
    if (front == -1 || front > rear)
        cout << "\nQueue is empty" << endl;
    else
    {
        cout << "\nPrinting Queue Values" << endl;
        for (int i = front; i <= rear; i++) // loop will run from front till it reaches rear
        {
            cout << arr[i] << " <- ";
        }
        cout << endl;
    }
}

void countArmstrongNumbers()
{
    if (front == -1 || front > rear)
        cout << "\nUnderflow" << endl;
    else
    {
        int count = 0;

        for (int i = front; i <= rear; i++)
        {

            int n = arr[i], r, sum = 0, temp;
            temp = n; // storing the n value into temp so that we can check if both sum and temp is equal or not

            while (n > 0) // till n is greather than 0 loop will run
            {
                r = n % 10;
                sum = sum + (r * r * r);
                n = n / 10;
            }
            if (temp == sum)
            {
                count++; // if the number is armstrong then incrementing the count variable
            }
        }

        if (count == 0)
        {
            cout << "\n No armstrong number found in the Queue" << endl;
        }
        else
        {
            cout << "\nFrequency of armstrong numbers : " << count << endl;
        }
    }
}

int main()
{
    int choice;

    // Menu Driven Program for user convinience
    while (true)
    {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Count Frequency of armstrong numbers\n5.Exit\n\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            enQueue(); // calling the enQueue function
        }
        else if (choice == 2)
        {
            deQueue(); // calling the deQueue function
        }
        else if (choice == 3)
        {
            display(); // calling the display function
        }
        else if (choice == 4)
        {
            countArmstrongNumbers(); // calling the countArmstrongNumbers function
        }
        else if (choice == 5)
        {
            cout << "\nSuccessfully exited" << endl;
            exit(0); // terminating the program
        }
        else
        {
            cout << "\nPlease choose a valid option!" << endl;
        }
    }
}