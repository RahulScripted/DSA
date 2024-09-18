// Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references. A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.




#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* constructTreeFromVector(const vector<int>& data) {
    if (data.empty()) return nullptr;

    TreeNode* root = new TreeNode(data[0]);
    queue<TreeNode*> q;
    q.push(root);

    size_t index = 1;
    while (!q.empty() && index < data.size()) {
        TreeNode* node = q.front();
        q.pop();

        if (index < data.size() && data[index] != INT_MIN){
            node->left = new TreeNode(data[index]);
            q.push(node->left);
        }
        index++;

        if (index < data.size() && data[index] != INT_MIN) { 
            node->right = new TreeNode(data[index]);
            q.push(node->right);
        }
        index++;
    }
    return root;
}

class Solution {
public:
    void helper(TreeNode* root, vector<vector<int>>& ans, vector<int> v, long long sum) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) {
            if (sum == (long long)(root->val)) {
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left, ans, v, sum - (long long)root->val);
        helper(root->right, ans, v, sum - (long long)root->val);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(root, ans, v, (long long)targetSum);
        return ans;
    }
};

void printPaths(const vector<vector<int>>& paths) {
    for (const auto& path : paths) {
        for (int val : path) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> treeData = {5,4,8,11,INT_MIN,13,4,7,2,INT_MIN,INT_MIN,5,1};
    TreeNode* root = constructTreeFromVector(treeData);
    
    Solution sol;
    int targetSum = 22;
    vector<vector<int>> paths = sol.pathSum(root, targetSum);
    
    cout << "Paths with sum " << targetSum << " : " << endl;
    printPaths(paths);
}