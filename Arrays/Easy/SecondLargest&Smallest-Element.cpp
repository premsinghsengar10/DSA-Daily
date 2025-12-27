#include <bits/stdc++.h>
using namespace std;

int SecondLargestElement(vector<int> &nums)
{
    int maxi = nums[0];
    int secmaxi = 0;

    for (int i : nums)
    {
        if (i > maxi)
        {
            secmaxi = maxi;
            maxi = i;
        }

        if (i < maxi && i > secmaxi)
        {
            secmaxi = i;
        }
    }
    return secmaxi;
}

int SecondSmallestElement(vector<int> &nums)
{

    int mini = nums[0];
    int secmini = 0;
    for (int i : nums)
    {
        if (i < mini)
        {
            secmini = mini;
            mini = i;
        }

        if (i > mini && i < secmini)
        {
            secmini = i;
        }
    }

    return secmini;
}

int main()
{
    vector<int> arr = {4, 2, 6, 8, 3, 8, 8, 7};

    cout << SecondLargestElement(arr) << endl;
    cout << SecondSmallestElement(arr) << endl;
}