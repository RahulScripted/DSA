// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.





#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Hashing Set
        unordered_set<int> numSet(nums.begin(), nums.end());
        return numSet.size() < nums.size(); 

        // Hashing Map
        // unordered_map<int, int> numSet;
        // for(int num : nums) numSet[num]++;

        // for(auto check: numSet){
        //     if(check.second > 1) return true;
        // }
        // return false;

        // By Sorting
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // for (int i = 1; i < n; i++) {
        //     if (nums[i] == nums[i - 1]) return true;
        // }
        // return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << "Contains Duplicate: " << (sol.containsDuplicate(nums) ? "Yes" : "No") << endl;
}