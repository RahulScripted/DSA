// Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.





#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Optimal One
        int count = 0, candidate = 0;
        
        for (int num : nums) {
            if (count == 0) candidate = num;
            if (num == candidate) count++;
            else count--;
        }
        
        return candidate;

        // Brute-force Approach
        // int n = (nums.size() - 1;
        // sort(nums.begin(), nums.end());
        // return nums[n) / 2];
    }
};

int main(){
    Solution sol;
    vector<int> nums = {3, 2, 3};
    cout << "Majority Element: " << sol.majorityElement(nums) << endl;
}