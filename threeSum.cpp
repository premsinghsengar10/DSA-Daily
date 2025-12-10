#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;


vector<vector<int>> threeSum(vector<int> &nums,int target){
    //first sort the array
    sort(nums.begin(),nums.end
    
    int n = nums.size();
    
    //set for collecting the unique vector
    set<vector<int>> temp;
    
    //collecting final answer
    vector<vector<int>> res;
    for(int i = 0 ; i < n - 2 ; i++){
        
        int first = nums[i];
        
        //declaring left and right of array
        int left = i + 1;
        int right = n - 1;
        
        while(left < right){
            int total = first + nums[left] + nums[right];
            if(total == target){
                temp.insert({first,nums[left],nums[right]});
                left++;
                right--;
            }
            
            if(total < target){
                left++;
            }
            
            else{
                right--;
            }
        }
    }
    
    for(auto i : temp){
        res.push_back(i);
    }
    
    return res;
}

int main(){
    vector<int> nums = {2,7,11,15,10,23,3};
    int target = 20;
    
    vector<vector<int>> ans = threeSum(nums,target);
    for(vector<int> i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    
    
    return 0;

}
