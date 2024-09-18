// Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {10,5,2,6};

    int k;
    cout<<"Enter the value of k : ";
    cin>>k;

    int n = nums.size();
    
    if (k <= 1){
        cout<<0;
        return 0;
    }
    
    int ans = 0;
    int prod = 1;
    int i = 0;
    int j = 0;
    while(j < n){
        prod *= nums[j];
        while(prod >= k){
            ans += (j - i);
            prod /= nums[i];
            i++;
        }
        j++;
    }
    while(i < n){
        ans += (j - i);
            prod /= nums[i];
            i++;
    }
    cout<<ans;
}