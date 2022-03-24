#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 3, 7, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }

        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}