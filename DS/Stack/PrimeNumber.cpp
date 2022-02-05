/*
Program Name - Count the number of prime number in the stack
Last modified - 5/3/22
*/

#include <bits/stdc++.h>
using namespace std;

int arr[5], n = 5, top = -1;

void push(int value)
{
    if (top == n - 1)
    {
        cout << "\nOverflow" << endl;
    }
    else
    {
        top++;
        arr[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "\nUnderflow" << endl;
    }
    else
    {
        cout << "\nPopped element is: " << arr[top] << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "\nStack is empty!" << endl;
    }
    else
    {
        cout << "\n";

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "\nStack is empty!" << endl;
    }
    else
    {
        cout << "\nTop element of the stack is: " << arr[top] << endl;
    }
}

void prime()
{
    int result = top + 1;

    for (int i = top; i >= 0; i--)
    {

        if (arr[i] == 0 || arr[i] == 1) // these are not prime numbers
        {
            result--;
        }
        else
        {
            for (int j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                {
                    result--;
                    break;
                }
            }
        }
    }

    cout << "\nTotal Prime Numbers are: " << result << endl;
}

int main()
{
    push(12);
    push(0);
    push(1);
    push(17);
    push(71);

    // display();
    prime();
    // pop();
    // peek();
}