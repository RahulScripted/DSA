// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int l = 0,r = nums.size() - 1,mid = 0;
    while(mid <= r){
        if(nums[mid] == 2){
            int temp = nums[mid];
            nums[mid] = nums[r];
            nums[r] = temp;
            r--;
        }
        else if(nums[mid] == 0){
            int temp = nums[mid];
            nums[mid] = nums[l];
            nums[l] = temp;
            l++;
        }
        else mid ++;
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