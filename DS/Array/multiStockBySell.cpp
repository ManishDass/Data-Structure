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
    int arr[] = {5, 2, 6, 1, 4, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int profit = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1]) // if curr element is greather than previous then add it
            profit += arr[i] - arr[i - 1];
    }
    cout << "Profit: " << profit << endl;
}