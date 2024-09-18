// Given an integer array nums, handle multiple queries of the following type:

// 1.  Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.

// Implement the NumArray class:

// 1.  NumArray(int[] nums) Initializes the object with the integer array nums.

// 2.  int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).



#include <iostream>
#include <vector>
using namespace std;

class NumArray {
public:
    vector<int> prefix;

    NumArray(vector<int>& nums) {
        prefix = vector<int>(nums.size());
        prefix[0] = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) return prefix[right];
        return prefix[right] - prefix[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left, right);
 */

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    NumArray* obj = new NumArray(nums);

    cout << "Sum of range (0, 2): " << obj->sumRange(0, 2) << endl;  // Output: 6
    cout << "Sum of range (1, 3): " << obj->sumRange(1, 3) << endl;  // Output: 9
    cout << "Sum of range (0, 4): " << obj->sumRange(0, 4) << endl;  // Output: 15

    delete obj;
    return 0;
}