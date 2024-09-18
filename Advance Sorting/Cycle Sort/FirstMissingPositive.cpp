// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
    const int n = nums.size();
    int i = 0;
    while(i < n){
        if(nums[i] <= 0) i++;
        else if(nums[i] > n || nums[nums[i] - 1] == nums[i] || nums[i] == i + 1) i++;
        else swap(nums[i],nums[nums[i] - 1]);
    }
    for (int i = 0; i < n; ++i)
        if (nums[i] != i + 1) return i + 1;
    return n + 1;
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
    cout<<"The smallest positive integer that is not present is : "<<firstMissingPositive(nums);
}