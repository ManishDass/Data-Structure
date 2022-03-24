/*
In selection sort we pick each element from starting and compare it
with its left elements, then store the varibale in temp and compare
it with its left element if left element is greather then simply swap
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp;

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;

        // just for dubugging purpose
        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}