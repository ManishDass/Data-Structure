#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    for (int i = 0; i < 3; i++)
    {
        int temp = nums.front();
        nums.erase(nums.begin());
        nums.push_back(temp);
    }

    // cout << nums.back() << endl;

    for (int num : nums)
        cout << num << " ";
}