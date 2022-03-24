/*
Best time to buy and sell stock to Maximise Profit
Date: 23-03-2022

time complexicity: O(N)
space complexicity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minSoFar = arr[0], maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        minSoFar = min(minSoFar, arr[i]);
        maxProfit = max((arr[i] - minSoFar), maxProfit);
    }
    cout << "Max Profit: " << maxProfit << endl;
}