#include <bits/stdc++.h>
using namespace std;

pair<int, int> infiniteArray(int arr[], int key)
{
    int start = 0, end = 1;
    while (arr[start] < key)
    {
        start = end;
        end = 2 * end;
    }
    return make_pair(start, end);
}

int binarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    int result = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            result = arr[mid];
            cout << result << endl;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return result;
}

int main()
{
    int arr[] = {1, 3, 5, 9, 13, 17, 19, 23, 17, 32, 38, 45, 52, 59, 62, 68, 77, 82, 94, 95, 97, 98, 100, 112, 114, 117, 119, 121, 125, 127, 129, 131, 149, 152, 158, 162, 178};
    int key = 3;

    pair<int, int> myPair = infiniteArray(arr, key);
    int result = binarySearch(arr, myPair.first, myPair.second, key);

    cout << result << endl;
}