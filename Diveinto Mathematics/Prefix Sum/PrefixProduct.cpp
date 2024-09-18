// Given an array nums return it's prefix sum

#include<iostream>
#include<vector>
using namespace std;
vector<int> prefixProduct(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1;i < n;i++) nums[i] *= nums[i - 1];
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
    cout<<"The prefix product will be : ";
    prefixProduct(nums);
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
}