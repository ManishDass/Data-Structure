
#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int res = binary_search(nums.begin(), nums.end(), target);
    return res;
}

int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int target = 5;

    int result = searchInsert(arr, target);

    if (result)
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present!" << endl;
    }
}