// Given an array of integers nums, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Return the leftmost pivot index. If no such index exists, return -1.



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0,rightSum = 0;
        for(auto i : nums) rightSum += i;

        for(int i = 0;i < n;i++){
            rightSum = rightSum - nums[i];
            if(leftSum == rightSum) return i;
            leftSum += nums[i];
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    cout << "Pivot index of nums: " << sol.pivotIndex(nums) << endl; // Output: 3

    return 0;
}