// Given a binary array nums, you should delete one element from it. Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.




#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};

    int k = 1;

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
    cout<<(maxLen - 1);
}