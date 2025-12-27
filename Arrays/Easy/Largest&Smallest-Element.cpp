#include <bits/stdc++.h>
using namespace std;

int LargestElement(vector<int> &nums)
{
    int maxi = nums[0];

    for (int i : nums)
    {
        if (i > maxi)
        {
            maxi = i;
        }
    }
    return maxi;
}

int SmallestElement(vector<int> &nums)
{

    int mini = nums[0];
    for (int i : nums)
    {
        if (i < mini)
        {
            mini = i;
        }
    }

    return mini;
}

int main()
{
    vector<int> arr = {4, 2, 6, 8, 3};

    cout << LargestElement(arr) << endl;
    cout << SmallestElement(arr) << endl;
}