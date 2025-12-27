
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i :  nums){
            mp[i]++;
        }

        for(auto i : mp){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }

int main()
{
    cout<<"Hello World"<< endl;
    vector<int> nums = {8,9,6,3};
    cout << containsDuplicate(nums);

    return 0;
}
