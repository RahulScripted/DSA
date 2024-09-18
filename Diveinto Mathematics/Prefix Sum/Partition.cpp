// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). Return the running sum of nums.

#include<iostream>
#include<vector>
using namespace std;
int partitionedIndex(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1;i < n;i++) nums[i] += nums[i - 1];
    int idx = -1;
    for(int i = 0;i < n;i++){
        if(2 * nums[i] == nums[n - 1]){
            idx = i;
            break;
        }
    }
    return idx;
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
    cout<<"Partition exist at index "<<partitionedIndex(nums);
}