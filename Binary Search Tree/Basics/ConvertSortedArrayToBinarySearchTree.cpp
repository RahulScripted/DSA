// Given an integer array nums where the elements are sorted in ascending order, convert it to a  height-balanced binary search tree.




#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* helper(vector<int>& nums,int lo,int hi) {
        // Base Case
        if(lo > hi) return NULL;
        int mid = lo + (hi - lo) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper(nums,lo,mid - 1);
        root->right = helper(nums,mid + 1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return helper(nums,0,n - 1);
    }
};

void display(TreeNode* root){
    // Base Case
    if(root == NULL) return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}

int main() {
    Solution solution;
    vector<int> data = {-10,-3,0,5,9};
    TreeNode* temp = solution.sortedArrayToBST(data);
    display(temp);
}