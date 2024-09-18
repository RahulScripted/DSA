// We define the conversion array conver of an array arr as follows: conver[i] = arr[i] + max(arr[0..i]) where max(arr[0..i]) is the maximum value of arr[j] over 0 <= j <= i. We also define the score of an array arr as the sum of the values of the conversion array of arr. Given a 0-indexed integer array nums of length n, return an array ans of length n where ans[i] is the score of the prefix nums[0..i].



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        vector<long long int> prefix(n,0);
        prefix[0] = 2 * nums[0];
        
        for(int i = 1;i < n;i++){
            maxi = max(maxi,nums[i]);
            prefix[i] = nums[i] + maxi + prefix[i - 1];
        }
        return prefix;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};

    vector<long long> result = sol.findPrefixScore(nums);

    cout << "Prefix scores for nums : ";
    for (long long score : result) {
        cout << score << " ";
    }
}