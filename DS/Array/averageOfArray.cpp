#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {5, 9, 2, 4, 3, 1, 12};
    float sum = 0;

    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
    }

    cout << "Average of array is: " << sum / 7 << endl;
}