#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;

        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[mini])
            {
                mini = j;
            }
        }

        swap(nums[i], nums[mini]);
    }
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2, 4, 2, 245, 6};
    SelectionSort(arr);

    for (int i : arr)
    {
        cout << i << " ";
    }
}