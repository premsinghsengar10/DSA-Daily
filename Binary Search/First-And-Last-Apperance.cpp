#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int target, bool isSearchingRight)
{
    int right = nums.size() - 1;
    int left = 0;
    int index = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            index = mid;
            if (isSearchingRight)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return index;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result = {-1, -1};
    int left = binarySearch(nums, target, false);
    int right = binarySearch(nums, target, true);
    result[0] = left;
    result[1] = right;
    return result;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 6;

    vector<int> ans = searchRange(nums, target);

    for (int i : ans)
    {
        cout << i << endl;
    }
}