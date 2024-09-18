// Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.



#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* helper(vector<int>& preorder, int preLo, int preHi, vector<int>& inorder, int inLo, int inHi) {
        if (preLo > preHi) return NULL;
        
        TreeNode* root = new TreeNode(preorder[preLo]);
        if (preLo == preHi) return root;
        
        int idx = 0;
        for (int i = inLo; i <= inHi; i++) {
            if (preorder[preLo] == inorder[i]) {
                idx = i;
                break;
            }
        }
        
        int lDistance = idx - inLo;
        root->left = helper(preorder, preLo + 1, preLo + lDistance, inorder, inLo, idx - 1);
        root->right = helper(preorder, preLo + lDistance + 1, preHi, inorder, idx + 1, inHi);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return helper(preorder, 0, n - 1, inorder, 0, n - 1);
    }
};

void printInOrder(TreeNode* node) {
    if (node == NULL) return;
    cout << node->val << " ";
    printInOrder(node->left);
    printInOrder(node->right);
}

int main() {
    Solution sol;
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};
    TreeNode* root = sol.buildTree(preorder, inorder);
    
    cout << "Constructed tree: ";
    printInOrder(root);
    cout << endl;
}