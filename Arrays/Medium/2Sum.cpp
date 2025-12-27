#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        // Check if the complement exists in the map
        if (numMap.find(complement) != numMap.end())
        {
            return {numMap[complement], i};
        }

        // Store the number with its index
        numMap[nums[i]] = i;
    }

    return {};
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 13;

    vector<int> result = twoSum(arr, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No two sum solution found." << endl;
    }
}