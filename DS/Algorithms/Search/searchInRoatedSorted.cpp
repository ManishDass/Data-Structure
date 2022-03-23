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

int searchElement(int arr[],int pivotElem, int n)
{
    
}

int main()
{
    int arr[] = {7, 9, 12, 1, 2, 3}; // 1 or 9 both can be answer
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    int pivotElem = pivot(arr, n);


    cout << "Element is present at index: " << pivot(arr, n) << endl;
}