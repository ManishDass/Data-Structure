/* Brute Force Apporach
Date : 22-03-2022
Authhor: Manish Das
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-5, 4, 6, -3, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout << arr[j] << endl;
            sum += arr[j];
        }
        cout << "Sum " << i << ": " << sum << endl;
    }
}