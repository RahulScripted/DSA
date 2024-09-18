// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). Return the running sum of nums.

#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1;i < n;i++) nums[i] += nums[i - 1];
    return nums;
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
    runningSum(nums);
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
}