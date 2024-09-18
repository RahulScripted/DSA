// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};

    int k;
    cout<<"Enter the k : ";
    cin>>k;

    int n = nums.size();
    int i = 0,j = 0,flips = 0;
    int len;
    int maxLen = INT_MIN;
    while(j < n){
        if(nums[j] == 1) j++;
        else{
            if(flips < k){
                flips++;
                j++;
            }
            else{
                len = (j - i);
                maxLen = max(maxLen,len);
                while(nums[i] == 1) i++;
                i++;
                j++;
            }
        }
    }
    len = (j - i);
    maxLen = max(maxLen,len);
    cout<<maxLen;
}