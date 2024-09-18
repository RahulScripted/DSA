// Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {10,5,2,6};

    int k;
    cout<<"Enter the value of k : ";
    cin>>k;

    if (k <= 1){
        cout<<0<<endl;
        return 0;
    }
    int ans = 0;
    int prod = 1;
    for (int l = 0, r = 0; r < nums.size(); ++r) {
        prod *= nums[r];
        while (prod >= k) prod /= nums[l++];
        ans += r - l + 1;
    }
    cout<<ans;
}