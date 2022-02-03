#include <bits/stdc++.h>
using namespace std;

void preOrderTraversal(char arr[])
{
    if (arr != NULL)
    {
        cout << arr[0]
    }
}

int main()
{
    int n = 9;
    char arr[n] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

    // left child = (2*i) + 1
    // right child = (2*i) + 2
    // parent would be at = (i-1)/2

    preOrderTraversal(arr);
}