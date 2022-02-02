#include <bits/stdc++.h>
using namespace std;

int sumOfFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return sumOfFibonacci(n - 1) + sumOfFibonacci(n - 2);
}

int main()
{
    int n = 3;
    int flag = 0;

    while (flag < n)
    {
        cout << sumOfFibonacci(flag) << " ";
        flag++;
    }
}