#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *top = NULL;

int main()
{

    char expression[] = {'A', '+', '(', 'B', '*', 'C', '-', '(', 'D', '/', 'E', '|', 'F', ')', '*', 'G', ')', '*', 'H'};
    int strSize = sizeof(expression) / sizeof(expression[0]);

    for (int i = 0; i < strSize; i++)
    {
        if (expression[i] >= 65 && expression[i] <= 123)
        {
            cout << expression[i] << " ";
            node *newNode = new node();
            newNode->data = expression[i];
            newNode->next = NULL;
        }
        // else if (expression)
    }
}