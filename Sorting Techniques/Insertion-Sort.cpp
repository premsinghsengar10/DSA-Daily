#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2, 4, 2, 245, 6};
    InsertionSort(arr);

    for (int i : arr)
    {
        cout << i << " ";
    }
}