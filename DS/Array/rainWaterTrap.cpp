/* maxElem Subarr ay using kadens algorithm
Date : 23-03-2022
Authhor: Manish Das
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 5, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left[n];
    int right[n];

    int maxElem = arr[0];

    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElem)
        {
            maxElem = arr[i];
        }
        left[i] = maxElem;
    }

    maxElem = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxElem)
        {
            maxElem = arr[i];
        }
        right[i] = maxElem;
    }

    long long int count = 0, minElement;

    for (int i = 1; i < n - 1; i++)
    {
        count += max(0, min(left[i], right[i]) - arr[i]);
    }

    cout << count << " Unit water will be trapped" << endl;
}

/* shorter syntax
long long ans=0;
       int left[n];
       int right[n];

       left[0]=arr[0];
       for(int i=1; i<n; i++){
           left[i]=maxElem(left[i-1],arr[i]);
       }
       right[n-1]=arr[n-1];
       for(int i=n-2; i>=0; i--){
           right[i]=maxElem(right[i+1],arr[i]);
       }
       for(int i=0; i<n; i++){
           ans+=maxElem(0,min(left[i],right[i])-arr[i]);
       }
       return ans;
   }
*/
