#include <bits/stdc++.h>
using namespace std;

// we've to use binary serach O(log n)
// arr = [24,69,100,99,79,78,67,36,26,19]
// output: 2th index

int peakElement(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int index = 0;

    while (start <= end)
    {
        if (arr[mid] > arr[index])
        {
            index = mid;
        }
        if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return index;
}

int main()
{
    int arr[] = {6, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nPeak element is present at index[" << peakElement(arr, n) << "]" << endl;
}