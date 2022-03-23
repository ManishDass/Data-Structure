/*
Given a sorted array of distinct integers and a target value,
return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.


Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
*/

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
    int target = 15;

    int result = searchInsert(arr, target);
    cout << target << " found/could be at position: " << result << endl;
}