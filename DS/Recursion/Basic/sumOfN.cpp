#include <bits/stdc++.h>
using namespace std;

int sumOfN(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num + sumOfN(num - 1);
}

int main()
{
    int n = 5;
    cout << sumOfN(n) << endl;
}