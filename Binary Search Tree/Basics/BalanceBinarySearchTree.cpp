// Given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them. A binary search tree is balanced if the depth of the two subtrees of every node never differs by more than 1.




#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* balanceTree(int lo, int hi, vector<int>& ans) {
        if (lo > hi) return NULL;
        int mid = lo + (hi - lo) / 2;
        TreeNode* root = new TreeNode(ans[mid]);
        root->left = balanceTree(lo, mid - 1, ans);
        root->right = balanceTree(mid + 1, hi, ans);
        return root;
    }

    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        return balanceTree(0, ans.size() - 1, ans);
    }
};

TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void printInorder(TreeNode* root) {
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    Solution solution;
    TreeNode* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 18);

    TreeNode* balancedRoot = solution.balanceBST(root);
    cout << "Inorder traversal of balanced tree: ";
    printInorder(balancedRoot);
    cout << endl;
}