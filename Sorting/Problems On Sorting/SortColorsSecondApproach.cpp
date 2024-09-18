// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int noZero = 0,noOne = 0,noTwo = 0;
    for(int i = 0;i < nums.size();i++){
        if(nums[i] == 0) ++noZero;
        else if(nums[i] == 1) ++noOne;
        else ++noTwo;
    }
    for(int i = 0;i < nums.size();i++){
        if(i < noZero) nums[i] = 0;
        else if(i < (noOne + noZero)) nums[i] = 1;
        else nums[i] = 2;
    }
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
    sortColors(nums);
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
}