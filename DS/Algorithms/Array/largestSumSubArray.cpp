/* Brute Force Apporach
Date : 22-03-2022
Authhor: Manish Das
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, -2, 5, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum > maxSum)
                maxSum = sum;
        }
    }

    cout << "Max Subarray: " << maxSum << endl;
}