// Given a binary array nums, you should delete one element from it. Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.




#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};

    int count = 0;
    int zeroPos = -1;
    int i = 0;
    int j = 0;
    int n = nums.size();
    int maxLen = INT_MIN;

    while(j < n){
        int prev = zeroPos;
        if(nums[j] == 0){
            count++;
            zeroPos = j;
        }
        if(count < 2) j++;
        else{
            maxLen = max(maxLen,(j - i));
            i = (prev + 1);
            count--;
            j++;
        }
    }
    maxLen = max(maxLen,(j - i));
    cout<<(maxLen - 1)<<endl;
}