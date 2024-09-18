// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int product = 1,p2 = 1,noZeros = 0;
    for(int i = 0;i < n;i++){
        if(nums[i] == 0) noZeros++;
        product *= nums[i];
        if(nums[i] != 0) p2 *= nums[i];
    }
    if(noZeros > 1) p2  = 0;
    for(int i = 0;i < n;i++){
        if(nums[i] == 0) nums[i] = p2;
        else nums[i] = product / nums[i]; 
    }
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
    cout<<"Product of all the elements of nums except itself will be : ";
    productExceptSelf(nums);
    for(int i = 0;i < size;i++){
        cout<<nums[i]<<" ";
    }
}