// Given the roots of two binary trees p and q, write a function to check if they are the same or not. Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.



#include <iostream>
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

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p || !q) return p == q;
        
        // Check if current nodes have the same value and recurse for left and right subtrees
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

// Helper function to insert nodes in the binary tree
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// Helper function to free allocated memory for the tree
void deleteTree(TreeNode* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// Main function
int main() {
    Solution solution;
    
    // Constructing two sample trees
    TreeNode* tree1 = nullptr;
    tree1 = insert(tree1, 5);
    insert(tree1, 3);
    insert(tree1, 7);
    
    TreeNode* tree2 = nullptr;
    tree2 = insert(tree2, 5);
    insert(tree2, 3);
    insert(tree2, 7);
    
    // Check if the two trees are the same
    bool result = solution.isSameTree(tree1, tree2);
    cout << (result ? "The trees are the same" : "The trees are different") << endl;
    
    // Free the allocated memory
    deleteTree(tree1);
    deleteTree(tree2);
    
    return 0;
}