#include <bits/stdc++.h>
using namespace std;

void primeRange(int M, int N)
{
    vector<int> primes;
    int flag;

    for (int i = M; i <= N; i++)
    {
        flag = 0;

        if (i == 0 || i == 1)
        {
            continue;
        }

        for (int j = 2; j <= i / 2; j++)
        {

            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            primes.push_back(i);
        }
    }

    for (int x : primes)
    {
        cout << x << " ";
    }
}

int main()
{
    primeRange(1, 10);
}