#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> res;
    set<vector<int>> temp;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int target = nums[i] + nums[j] + nums[k];
            if (target == 0)
            {
                temp.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if (target < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    for (auto i : temp)
    {
        res.push_back(i);
    }
    return res;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(arr);
    for (auto vec : result)
    {
        for (auto val : vec)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}