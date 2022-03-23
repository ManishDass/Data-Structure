#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    int res = arr[0];

    while (start < end)
    {
        if (arr[mid] >= arr[0]) // this means first part of sorted array
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int arr[] = {7, 9, 12, 1, 2, 3}; // 1 or 9 both can be answer
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Pivot ELement is: " << pivot(arr, n) << endl;
}