#include <bits/stdc++.h>
using namespace std;

void findRootElement(char arr[], int n)
{
    // int a, b;
    for (int i = 0; i < n; i++)
    {

        if (arr[(i - 1) / 2] == arr[i])
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    int n = 5;
    // char arr[n] = {'B', 'D', 'A', 'G', 'E', 'C', 'H', 'F', 'I'}; //inorder
    char arr[n] = {'A', 'B', 'C', 'D', 'E'};

    // left child = (2*i) + 1
    // right child = (2*i) + 2
    // parent would be at = (i-1)/2

    findRootElement(arr, n);
    // cout << 3 / 2 << endl;
}