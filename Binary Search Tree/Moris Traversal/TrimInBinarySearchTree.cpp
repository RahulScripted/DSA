// Given the root of a binary search tree and the lowest and highest boundaries as low and high, trim the tree so that all its elements lies in [low, high]. Trimming the tree should not change the relative structure of the elements that will remain in the tree (i.e., any node's descendant should remain a descendant). It can be proven that there is a unique answer. Return the root of the trimmed binary search tree. Note that the root may change depending on the given bounds.




#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};

// Solution class containing the trim function
class Solution {
public:
    void trim(TreeNode* root, int low, int high) {
        if (root == NULL) return;

        // Trimming the left subtree
        while (root->left != NULL) {
            if (root->left->val < low) root->left = root->left->right;
            else if (root->left->val > high) root->left = root->left->left;
            else break;
        }

        // Trimming the right subtree
        while (root->right != NULL) {
            if (root->right->val < low) root->right = root->right->right;
            else if (root->right->val > high) root->right = root->right->left;
            else break;
        }
        trim(root->left, low, high);
        trim(root->right, low, high);
    }

    TreeNode* trimBST(TreeNode* root, int low, int high){
        TreeNode* temp = new TreeNode(INT_MAX);
        temp->left = root;
        trim(temp, low, high);
        return temp->left;
    }
};

TreeNode* createTree(const vector<int>& values) {
    if (values.empty()) return NULL;
    
    TreeNode* root = new TreeNode(values[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < values.size()) {
        TreeNode* node = q.front();
        q.pop();
        
        if (values[i] != INT_MAX) {
            node->left = new TreeNode(values[i]);
            q.push(node->left);
        }
        i++;
        if (i >= values.size()) break;

        if (values[i] != INT_MAX) {
            node->right = new TreeNode(values[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}

void displayTree(TreeNode* root) {
    if (root == NULL) return;

    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        
        if (node) {
            cout << node->val << " ";
            q.push(node->left);
            q.push(node->right);
        }
    }
    cout << endl;
}

int main() {
    vector<int> values = {3, 0, 4, INT_MAX, 2, INT_MAX, INT_MAX, 1};
    TreeNode* root = createTree(values);
    cout << "Original Tree:" << endl;
    displayTree(root);

    Solution sol;
    int low = 1, high = 3;
    TreeNode* trimmedRoot = sol.trimBST(root, low, high);
    cout << "Trimmed Tree (low = " << low << ", high = " << high << ") : ";
    displayTree(trimmedRoot);
}