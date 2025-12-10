#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    for(int i = 0 ; i < nums.size(); i++){
        int temp = target - nums[i];
        
        if(mp.find(temp) != mp.end()){
            return{mp[temp],i};
        }
        
        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;
    
    vector<int> ans = twoSum(nums,target);
    for(int i : ans){
        cout << i << endl;
    }
    
    
    return 0;

}
