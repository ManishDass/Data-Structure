#include <bits/stdc++.h>
using namespace std;

/*
1) Initialize the first as 0(i.e, index of arr[0] element
2) Start traversing the array from array[1],
   a) If the current element in array say arr[i] is greater
      than first. Then update first and second as,
      second = first
      first = arr[i]
   b) If the current element is in between first and second,
      then update second to store the value of current variable as
      second = arr[i]
3) Return the value stored in second.
*/

int main()
{
    int arr[3] = {12, 12, 7}, largest1 = arr[0], largest2 = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arr[i];
        }
        if (arr[i] < largest1 && arr[i] > largest2)
        {
            largest2 = arr[i];
        }
    }

    cout << "Largest 1: " << largest1 << endl;
    cout << "Largest 2: " << largest2 << endl;
}