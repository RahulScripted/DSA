// Given the root of a binary tree, invert the tree, and return its root.




#include <iostream>
using namespace std;

// Definition for a binary tree node.
class TreeNode {
public: 
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Function to invert a binary tree
TreeNode* invertTree(TreeNode* root) {
    // Base Case
    if (root == NULL) return NULL;

    // Swap left and right children
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recursively invert left and right subtrees
    invertTree(root->left);
    invertTree(root->right);

    return root;
}

// Function to print the tree in inorder (for testing)
void inorder(TreeNode* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Example Usage
int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Original Tree Inorder: ";
    inorder(root);
    cout << endl;

    root = invertTree(root);

    cout << "Inverted Tree : ";
    inorder(root);
    cout << endl;
}