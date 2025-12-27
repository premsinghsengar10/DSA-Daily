#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= nums[right])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return nums[left];

    return -1;
}

int main()
{
    cout << "Hello World" << endl;
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << findMin(nums) << endl;
    return 0;
}