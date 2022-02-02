#include <bits/stdc++.h>
using namespace std;

void printToNForward(int n)
{
    if (n == 0)
    {
        return;
    }
    printToNForward(n - 1);
    cout << n << " ";
}

void printToNReverse(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printToNReverse(n - 1);
}

int main()
{
    int n = 5;
    printToNForward(n);
    cout << endl;
    printToNReverse(n);
}