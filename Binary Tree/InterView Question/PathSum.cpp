// Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum. A leaf is a node with no children.




#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode {
public: 
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return false;
        if (root->val == targetSum && !root->left && !root->right) return true;
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
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

        if (index < data.size() && data[index] != -1) {  // -1 represents NULL
            node->left = new TreeNode(data[index]);
            q.push(node->left);
        }
        index++;

        if (index < data.size() && data[index] != -1) {  // -1 represents NULL
            node->right = new TreeNode(data[index]);
            q.push(node->right);
        }
        index++;
    }

    return root;
}

int main() {
    vector<int> treeData = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, -1, 1};
    TreeNode* root = constructTreeFromVector(treeData);

    Solution sol;
    int targetSum = 22;
    bool result = sol.hasPathSum(root, targetSum);
    cout << "Path with sum " << targetSum << (result ? " exists." : " does not exist.") << endl;
}