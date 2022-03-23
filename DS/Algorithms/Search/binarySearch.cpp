#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    // start + end / 2 will also work but for larger values
    // like 1^27 + 1^27 will exceed int limits whereas subtract will not
    // exceed the limits

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            cout << "Found Key:" << key << " at index number: " << mid << endl;
            return;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    cout << "Element dosent exist!" << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    binarySearch(arr, n, 7);
}