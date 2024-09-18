// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    // <------ Use 1 vector size of array ------>
    int n = nums.size();
    vector<int> prefix(n);

    // Prefix Product except itself
    int p = nums[0];
    prefix[0] = 1;
    for(int i = 1;i < n;i++){
        prefix[i] = p;
        p *= nums[i];
    }
    p = nums[n - 1];
    for(int i = n - 2;i >= 0;i--){
        prefix[i] *= p;
        p *= nums[i];
    }
    return prefix;
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
    vector<int>result = productExceptSelf(nums);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}