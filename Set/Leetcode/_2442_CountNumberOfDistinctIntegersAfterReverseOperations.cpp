// You are given an array nums consisting of positive integers. You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums. Return the number of distinct integers in the final array.





#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int n){
        int rev = 0;
        while(n > 0){
            int digit = (n % 10);
            rev = (rev * 10) + digit;
            n /= 10;
        }
        return rev;
    }

    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        for(int i = 0;i < n;i++){
            int rev = reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(rev);
        }
        return s.size();
    }
};

int main(){
    Solution solve;

    // 1st Example
    vector<int>nums = {1,13,10,12,31};
    cout<<"The number of distinct integers in the final array will be : "<<solve.countDistinctIntegers(nums)<<endl;

    // 2nd Example
    nums = {2,2,2};
    cout<<"The number of distinct integers in the final array will be : "<<solve.countDistinctIntegers(nums)<<endl;
}