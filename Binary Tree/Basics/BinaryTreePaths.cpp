// Given the root of a binary tree, return all root-to-leaf paths in any order.




#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Helper function to generate all root-to-leaf paths
void helper(TreeNode* root, string s, vector<string> &ans) {
    // Base Case
    if (root == NULL) return;
    
    string a = to_string(root->val);
    
    // If it's a leaf node, add the path to the answer
    if (root->left == NULL && root->right == NULL) {
        s += a;
        ans.push_back(s);
        return;
    }
    
    // Recursively go left and right, adding the current value to the path
    helper(root->left, s + a + "->", ans);
    helper(root->right, s + a + "->", ans);
}

// Function to return all root-to-leaf paths in the tree
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    helper(root, "", ans);
    return ans;
}

// Example Usage
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<string> paths = binaryTreePaths(root);

    cout << "Root-to-Leaf Paths : ";
    for (string path : paths) {
        cout << path << "   ";
    }
}