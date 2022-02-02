#include <bits/stdc++.h>
using namespace std;

void greet(int n)
{
    if (n == 0)
    {
        return;
    }

    greet(n - 1);
    cout << "Hello World " << n << endl;
}

int main()
{
    int n = 5;
    greet(n);
}