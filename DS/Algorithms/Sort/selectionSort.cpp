/*
In selection sort we pick the smallest element then place it in the first
position, then pick the second smallest and pick it on the second position
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 1, 5, 9, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp;

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

        // just for dubugging purpose
        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}