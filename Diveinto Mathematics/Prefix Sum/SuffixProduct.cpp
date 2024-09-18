// Given an array nums return it's suffix sum

#include<iostream>
#include<vector>
using namespace std;
vector<int> suffixSum(vector<int>& nums) {
    int n = nums.size();
    for(int i = n - 2;i >= 0;i--) nums[i] *= nums[i + 1];
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
    cout<<"The suffix sum will be : ";
    suffixSum(nums);
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
}