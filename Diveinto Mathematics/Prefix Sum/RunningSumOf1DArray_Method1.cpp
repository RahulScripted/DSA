// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). Return the running sum of nums.

#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    ans[0] = nums[0];
    for(int i = 1;i < n;i++){
        ans[i] = nums[i] + ans[i - 1];
    }  
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"The running sum will be : ";
    vector<int> ans = runningSum(nums);
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
}