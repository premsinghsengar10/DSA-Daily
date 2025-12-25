

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int mid = left + (right - left) / 2;

    while (left <= right)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[mid] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
        mid = left + (right - left) / 2;
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    cout << binarySearch(nums, target) << endl;

    return 0;
}