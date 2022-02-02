#include <bits/stdc++.h>
using namespace std;

int nthFibonacciNumber(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return nthFibonacciNumber(n - 1) + nthFibonacciNumber(n - 2);
}

int main()
{
    int n = 7; // 0 based index 0 1 1 2 3 5 8 13
    cout << nthFibonacciNumber(n);
}