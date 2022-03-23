#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int first = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
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
    return first;
}

int lastOccurrence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int last = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return last;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;
}