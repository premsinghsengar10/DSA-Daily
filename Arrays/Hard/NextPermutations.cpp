#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&nums,int start,int end){
    while(start < end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

void nextPermutations(vector<int> &nums){
    int n = nums.size();
    int i = n - 2;
    
    while(i >= 0 && nums[i] >= nums[i+1]){
        i--;
    }
    
    if(i >= 0){
        int j = n -1;
        while(nums[j] <= nums[i]){
            j--;
        }
        swap(nums[j],nums[i]);
    }
    
    reverse(nums,i+1,n-1);
    
}


int main(){
    vector<int> nums = {1,2,3};
    for(int i : nums){
        cout << i << " ";
    }
    cout << endl;
    nextPermutations(nums);
    for(int i : nums){
        cout << i << " ";
    }
    
    return 0;

}
