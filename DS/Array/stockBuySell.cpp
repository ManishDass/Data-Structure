/*
Best time to buy and sell stock to Maximise Profit
Date: 23-03-2022
apporach is simple just create a auxilary array from right side
then subtract aux[i] from arr[i] to calculate maximum profit

time complexicity: O(N)
space complexicity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 1, 4, 8, 7, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int aux[n];
    aux[n - 1] = arr[n - 1];
    int maxElem = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxElem)
            maxElem = arr[i];

        aux[i] = max(arr[i], maxElem);
    }

    maxElem = aux[0] - arr[0];

    for (int i = 1; i < n; i++)
    {
        if (aux[i] - arr[i] > maxElem)
            maxElem = aux[i] - arr[i];
    }

    cout << maxElem << endl;
}