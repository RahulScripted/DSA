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
    TreeNode* construct(vector<int>& inorder,int inLo,int inHi,vector<int>& postorder,int postLo,int postHi){
        if(inLo > inHi) return NULL;
        TreeNode* root = new TreeNode(postorder[postHi]);
        if(inLo == inHi) return root;
        int idx = 0;
        for(int i = inLo;i <= inHi;i++){
            if(inorder[i] == root -> val){
                idx = i;
                break;
            }
        }
        int lDistance = idx - inLo;
        root->left = construct(inorder,inLo,idx - 1,postorder,postLo,postLo + lDistance - 1);
        root->right = construct(inorder,idx + 1,inHi,postorder,postLo + lDistance,postHi - 1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return construct(inorder,0,(n - 1),postorder,0,(n - 1));
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
    vector<int> inorder = {9,3,15,20,7};
    vector<int> postorder = {9,15,7,20,3};
    TreeNode* root = sol.buildTree(inorder,postorder);
    
    cout << "Constructed tree: ";
    printInOrder(root);
    cout << endl;
}