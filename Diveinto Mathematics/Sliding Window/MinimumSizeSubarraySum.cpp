// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,3,1,2,4,3};

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    int i = 0;
    int j = 0;
    int sum = 0;
    int len;
    int minLen = INT_MAX;
    while(j < nums.size()){
        sum += nums[j];
        while(sum >= target){
            len = (j - i + 1);
            minLen = min(minLen,len);
            sum -= nums[i];
            i++;
        }
        j++;
    }
    cout<<minLen<<endl;
}