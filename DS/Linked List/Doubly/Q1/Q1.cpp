#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int HRA;
    int DA;
    int incomeTax;
    int netSalary;
    node *prev;
    node *next;
};

node *head = NULL;

void insertNode(int hra, int da, int grossSalary)
{
    node *newNode = new node();

    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
    }
    else
    {
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // calculate net salary here after deduction of tax and adding the allowances
    int tempSalary = hra + da + grossSalary;
    int netsalary; // calculate salary after deduction of tax
    int taxAmount;

    if (tempSalary > 250000 || tempSalary <= 500000)
    {
        taxAmount = 0.05 * tempSalary;
        netsalary = tempSalary - taxAmount;
    }
    else if (tempSalary > 500000 || tempSalary <= 1000000)
    {
        taxAmount = 0.2 * tempSalary;
        netsalary = tempSalary - taxAmount;
    }
    else
    {
        taxAmount = 0.3 * tempSalary;
        netsalary = tempSalary - taxAmount;
    }

    newNode->HRA = hra;
    newNode->DA = da;
    newNode->incomeTax = taxAmount;
    newNode->netSalary = netsalary;
}

void display()
{
    node *temp = head;
    int counter = 1;

    while (temp != NULL)
    {
        cout << "\nEmployee " << counter << " Salary Slip " << endl;
        cout << "HRA: " << temp->HRA << endl;
        cout << "DA: " << temp->DA << endl;
        cout << "Income Tax: " << temp->incomeTax << endl;
        cout << "netSalary: " << temp->netSalary << endl;
        temp = temp->next;
        counter++;
    }
}

int main()
{
    insertNode(7500, 4500, 270000);
    insertNode(9500, 6500, 390000);
    insertNode(17500, 14500, 830000);
    display();
}